//#include<iostream>
//#include<list>
//#include<thread>
//#include<mutex>
//
////����mutex�������ϲŻ�������������һ�����ӣ�����ס���ң�����ס���㣩
////���ֽ�������ķ�����
////1��ÿ��lock()ʱ������˳�����m_mutex.lock();m_mutex2.lock();��ô������ط�Ҳʱm_mutex.lock();m_mutex2.lock();�������˳�����
////2��������std::lock(m_mutex, m_mutex2);������һ���޷���������ô�������������;ֻ�������������ܳɹ�����ʱ���ſ��Գɹ�����ס��lock()����������
////	 ���������Ҫ�ֶ����� m_mutex2.unlock();m_mutex.unlock();
////3����std::lock(m_mutex, m_mutex2);����ʱstd::lock_guard<std::mutex> mBguard(m_mutex,std::adopt_lock);std::lock_guard<std::mutex> mCguard(m_mutex2, std::adopt_lock);
////	 adopt_lock��ʾ��ʹ��lock_guard��ʱ�������ٴμ��������캯�����ˣ�ֻ��Ҫ��������������������
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
//				//std::lock_guard<std::mutex> mAguard(m_mutex);//ֻ�ܼ������������ڿ�ʼ����ʱ��lock()�ˣ����������ʱunlock()�����ﻨ���ž�������������;
//				/*m_mutex.lock();
//				m_mutex2.lock();*/
//				std::lock(m_mutex, m_mutex2);
//				m_ListCon.push_back(i);
//				std::lock_guard<std::mutex> mBguard(m_mutex,std::adopt_lock);
//				std::lock_guard<std::mutex> mCguard(m_mutex2,std::adopt_lock);
//				/*m_mutex2.unlock();
//				m_mutex.unlock();*/
//			}
//			cout << "д��list��������Ϊ��" << i << endl;
//		}
//	}
//
//	bool OutputReadData(int& tCommand)
//	{
//		m_mutex2.lock();
//		m_mutex.lock();
//		if (m_ListCon.empty())
//		{
//			cout << "����Ϊ�գ�" << endl;
//			m_mutex.unlock();
//			m_mutex2.unlock();
//			return false;
//		}
//		else
//		{
//			tCommand = m_ListCon.front();//����������һ��Ԫ�ص�ֵ
//			cout << tCommand << endl;
//			m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
//			m_mutex.unlock();
//			m_mutex2.unlock();
//			return true;
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
//	std::mutex m_mutex2;
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