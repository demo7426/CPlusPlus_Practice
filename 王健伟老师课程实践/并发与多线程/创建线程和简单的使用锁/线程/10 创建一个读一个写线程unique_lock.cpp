//#include<iostream>
//#include<list>
//#include<thread>
//#include<mutex>
////#include<Windows.h>//�������ͷ�ļ��Ϳ���Sleep(1000);//˯һ��
//
////unique_lock ӵ�к�lock_guardһ���Ĺ��ܣ��ҹ��ܱ�lock_guard����
//using namespace std;
//class CommonData
//{
//public:
//	CommonData() {};
//	~CommonData() {};
//
//	void InputData()
//	{
//		for (int i = 0; i < 1000000; i++)
//		{
//			{
//				//std::lock_guard<std::mutex> mAguard(m_mutex);//ֻ�ܼ������������ڿ�ʼ����ʱ��lock()�ˣ����������ʱunlock()�����ﻨ���ž�������������
//				//std::unique_lock<std::mutex> mBguard(m_mutex);
//				m_mutex.lock();
//				std::unique_lock<std::mutex> mBguard(m_mutex,adopt_lock);
//
//				//˯2000ms
//				std::chrono::milliseconds mdura(2000);
//				std::this_thread::sleep_for(mdura);
//				
//				//m_mutex.lock();
//				m_ListCon.push_back(i);
//				//m_mutex.unlock();
//			}
//			cout << "д��list��������Ϊ��" << i << endl;
//		}
//	}
//
//	bool OutputReadData(int &tCommand)
//	{
//		std::unique_lock<std::mutex> mCguard(m_mutex,std::try_to_lock);
//		if (mCguard.owns_lock())
//		{
//			//m_mutex.lock();
//			if (m_ListCon.empty())
//			{
//				cout << "����Ϊ�գ�" << endl;
//				//m_mutex.unlock();
//				return false;
//			}
//			else
//			{
//				tCommand = m_ListCon.front();//����������һ��Ԫ�ص�ֵ
//				cout << tCommand << endl;
//				m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
//				//m_mutex.unlock();
//				return true;
//			}
//		}
//		else
//		{
//			cout << "OutputReadDataû��lock()ס��" << endl;
//		}
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
//	std::mutex m_mutex;
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