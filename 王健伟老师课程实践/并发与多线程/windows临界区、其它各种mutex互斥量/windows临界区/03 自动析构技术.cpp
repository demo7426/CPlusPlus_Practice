//#include<iostream>
//#include<list>
//#include<thread>
//#include<mutex>
//#include<Windows.h>
//using namespace std;
//
////���������Զ��ͷ�windows�µ��ٽ�������ֹ����LeaveCriticalSection�������������������������c++11�е�std::lock_guard<std::mutex> ...
//class WindowsLock//RAII�ࣨresource acquire is initialization�����ġ���Դ��ȡ����ʼ����
//				 //����������ָ�붼����RAII��
//{
//public:
//	WindowsLock(CRITICAL_SECTION *tpWinSec)
//	{
//		m_WinSec_Lock = tpWinSec;
//		EnterCriticalSection(m_WinSec_Lock);
//	};
//	~WindowsLock() 
//	{
//		LeaveCriticalSection(m_WinSec_Lock);
//	};
//
//private:
//	CRITICAL_SECTION *m_WinSec_Lock;
//};
//
//#define _WINDOWCS
//class CommonData
//{
//public:
//	CommonData()
//	{
//#ifdef _WINDOWCS
//		InitializeCriticalSection(&m_WinSec);
//#endif // _WINDOWCS
//	};
//	~CommonData() {};
//
//	void InputData()
//	{
//		for (int i = 0; i < 1000000; i++)
//		{
//			{
//#ifdef _WINDOWCS
//				WindowsLock ms(&m_WinSec);
//				//EnterCriticalSection(&m_WinSec);
//				m_ListCon.push_back(i);
//				//LeaveCriticalSection(&m_WinSec);
//#else
//				std::lock_guard<std::mutex> mAguard(m_mutex);//ֻ�ܼ������������ڿ�ʼ����ʱ��lock()�ˣ����������ʱunlock()�����ﻨ���ž�������������;
//								//m_mutex.lock();
//				m_ListCon.push_back(i);
//				//m_mutex.unlock();
//#endif // _WINDOWCS
//
//
//			}
//			cout << "д��list��������Ϊ��" << i << endl;
//		}
//	}
//
//	bool OutputReadData(int& tCommand)
//	{
//#ifdef _WINDOWCS
//		EnterCriticalSection(&m_WinSec);
//		if (m_ListCon.empty())
//		{
//			cout << "����Ϊ�գ�" << endl;
//			LeaveCriticalSection(&m_WinSec);
//			return false;
//		}
//		else
//		{
//			tCommand = m_ListCon.front();//����������һ��Ԫ�ص�ֵ
//			cout << tCommand << endl;
//			m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
//			LeaveCriticalSection(&m_WinSec);
//			return true;
//		}
//#else
//		m_mutex.lock();
//		if (m_ListCon.empty())
//		{
//			cout << "����Ϊ�գ�" << endl;
//			m_mutex.unlock();
//			return false;
//		}
//		else
//		{
//			tCommand = m_ListCon.front();//����������һ��Ԫ�ص�ֵ
//			cout << tCommand << endl;
//			m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
//			m_mutex.unlock();
//			return true;
//		}
//#endif // _WINDOWCS
//	}
//
//	void OutputData()
//	{
//		for (int i = 0; i < 1000000; i++)
//		{
//			int mCommand = 0;
//			if (OutputReadData(mCommand))
//			{
//				cout << "��ȡ��һ��Ԫ�سɹ���" << endl;
//			}
//			else
//			{
//				cout << "������û��Ԫ�أ�" << endl;
//			}
//		}
//	}
//private:
//	std::list<int>m_ListCon;
//	std::mutex m_mutex;//m_mutexΪ������
//#ifdef _WINDOWCS
//	CRITICAL_SECTION m_WinSec;
//#endif // _WINDOWCS
//};
//
//
//int main()
//{
//	CommonData mObject;
//	thread mThreadFirst(&CommonData::InputData, &mObject);
//	thread mThreadSecond(&CommonData::OutputData, &mObject);
//	mThreadFirst.join();
//	mThreadSecond.join();
//
//	return 0;
//}