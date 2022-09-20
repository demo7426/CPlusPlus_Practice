#include<iostream>
#include<list>
#include<thread>
#include<mutex>
//#include<Windows.h>//�������ͷ�ļ��Ϳ���Sleep(1000);//˯һ��

//unique_lock ӵ�к�lock_guardһ���Ĺ��ܣ��ҹ��ܱ�lock_guard����
using namespace std;
class CommonData
{
public:
	CommonData() {};
	~CommonData() {};

	void InputData()
	{
		for (int i = 0; i < 1000000; i++)
		{
			{
				std::unique_lock<std::mutex> mBguard(m_mutex, std::defer_lock);
				unique_lock<mutex> mDguard(std::move(mBguard));//ת������Ȩ������ͬͨ��������ת�ư󶨹�ϵ���ں�����ʵ���ƶ�����https://www.bilibili.com/video/BV1Yb411L7ak?p=8   һСʱ��ʮ�����ӣ�
				
				if (mDguard.try_lock() == true)
				{
					cout << "������ס�ˣ�" << endl;
					m_ListCon.push_back(i);

					//����Ϊ��m_mutex��������mBguard�����Ĺ�ϵ�ͷŵ�������ָ��unlock();
					std::mutex *mp = mDguard.release();
					mp->unlock();
				}
				else
				{
					cout << "����û����ס�����Ըɵ������顣" << endl;
				}

				//mBguard.lock();
				//mBguard.unlock();
				//......����дһЩ�ǹ���Ĵ���
				//mBguard.lock();
	
				//˯2000ms
				/*std::chrono::milliseconds mdura(2000);
				std::this_thread::sleep_for(mdura);*/

				//mBguard.unlock();//�������㡣��Ϊ������std::unique_lock<std::mutex> mBguard(m_mutex, defer_lock)����������Լ��������������ͷ�
			}
			cout << "д��list��������Ϊ��" << i << endl;
		}
	}

	bool OutputReadData(int& tCommand)
	{
		std::unique_lock<std::mutex> mCguard(m_mutex, std::try_to_lock);
		if (mCguard.owns_lock())
		{
			if (m_ListCon.empty())
			{
				cout << "����Ϊ�գ�" << endl;
				return false;
			}
			else
			{
				tCommand = m_ListCon.front();//����������һ��Ԫ�ص�ֵ
				cout << tCommand << endl;
				m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
				return true;
			}
		}
		else
		{
			cout << "OutputReadDataû��lock()ס��" << endl;
		}
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
	std::mutex m_mutex;
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