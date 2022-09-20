#include<iostream>
#include<list>
#include<thread>
#include<mutex>
#include<Windows.h>
using namespace std;

//recursive_mutex�ݹ�Ķ�ռ������
//std::mutex ��ռ�������Լ�lockʱ����lock����
//recursive_mutex���ݹ�Ķ�ռ������������ͬһ���̣߳�ͬһ����������α�lock()��Ч���ϱ�mutex�ϲ�һЩ
//recursive_mutexҲ��lock()��unlock()
//�ݹ������˵�����ƣ��ݹ�̫��ο��ܻᱨ�쳣

//���������Զ��ͷ�windows�µ��ٽ�������ֹ����LeaveCriticalSection�������������������������c++11�е�std::lock_guard<std::mutex> ...
class WindowsLock//RAII�ࣨresource acquire is initialization�����ġ���Դ��ȡ����ʼ����
				 //����������ָ�붼����RAII��
{
public:
	WindowsLock(CRITICAL_SECTION* tpWinSec)
	{
		m_WinSec_Lock = tpWinSec;
		EnterCriticalSection(m_WinSec_Lock);
	};
	~WindowsLock()
	{
		LeaveCriticalSection(m_WinSec_Lock);
	};

private:
	CRITICAL_SECTION* m_WinSec_Lock;
};

//#define _WINDOWCS
class CommonData
{
public:
	CommonData()
	{
#ifdef _WINDOWCS
		InitializeCriticalSection(&m_WinSec);
#endif // _WINDOWCS
	};
	~CommonData() {};

	void InputData()
	{
		for (int i = 0; i < 1000000; i++)
		{
			{
#ifdef _WINDOWCS
				WindowsLock ms(&m_WinSec);
				//EnterCriticalSection(&m_WinSec);
				m_ListCon.push_back(i);
				//LeaveCriticalSection(&m_WinSec);
#else
				std::lock_guard<std::timed_mutex> mAguard(m_mutex);//ֻ�ܼ������������ڿ�ʼ����ʱ��lock()�ˣ����������ʱunlock()�����ﻨ���ž�������������;
				m_ListCon.push_back(i);
#endif // _WINDOWCS


			}
			cout << "д��list��������Ϊ��" << i << endl;
		}
	}

	bool OutputReadData(int& tCommand)
	{
#ifdef _WINDOWCS
		EnterCriticalSection(&m_WinSec);
		if (m_ListCon.empty())
		{
			cout << "����Ϊ�գ�" << endl;
			LeaveCriticalSection(&m_WinSec);
			return false;
		}
		else
		{
			tCommand = m_ListCon.front();//����������һ��Ԫ�ص�ֵ
			cout << tCommand << endl;
			m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
			LeaveCriticalSection(&m_WinSec);
			return true;
		}
#else
		std::chrono::milliseconds mdura(100);
		//std::this_thread::sleep_for(mdura);
		//if (m_mutex.try_lock_for(mdura))//�ȴ�100���������Ի�ȡ��
		if (m_mutex.try_lock_until(chrono::steady_clock::now() + mdura))//��100�����ڻ�ȡ��
		{
			if (m_ListCon.empty())
			{
				cout << "����Ϊ�գ�" << endl;
				m_mutex.unlock();
				return false;
			}
			else//û�ܻ�ȡ��
			{
				tCommand = m_ListCon.front();//����������һ��Ԫ�ص�ֵ
				cout << tCommand << endl;
				m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
				m_mutex.unlock();
				return true;
			}
		}
		else
		{
			/*std::chrono::milliseconds mdura(1000);
			std::this_thread::sleep_for(mdura);*/
		}
		
#endif // _WINDOWCS
	}

	void OutputData()
	{
		for (int i = 0; i < 1000000; i++)
		{
			int mCommand = 0;
			if (OutputReadData(mCommand))
			{
				cout << "��ȡ��һ��Ԫ�سɹ���" << endl;
			}
			else
			{
				cout << "������û��Ԫ�أ�" << endl;
			}
		}
	}
private:
	std::list<int>m_ListCon;
	std::timed_mutex m_mutex;//m_mutexΪ������
#ifdef _WINDOWCS
	CRITICAL_SECTION m_WinSec;
#endif // _WINDOWCS
};


int main()
{
	CommonData mObject;
	thread mThreadFirst(&CommonData::InputData, &mObject);
	thread mThreadSecond(&CommonData::OutputData, &mObject);
	mThreadFirst.join();
	mThreadSecond.join();

	return 0;
}