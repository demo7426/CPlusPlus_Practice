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
//		for (int i = 1; i < 10000; i++)
//		{
//			{
//				std::unique_lock<std::mutex> mBguard(m_mutex, std::defer_lock);
//				unique_lock<mutex> mDguard(std::move(mBguard));//ת������Ȩ������ͬͨ��������ת�ư󶨹�ϵ���ں�����ʵ���ƶ�����https://www.bilibili.com/video/BV1Yb411L7ak?p=8   һСʱ��ʮ�����ӣ�
//
//				if (mDguard.try_lock() == true)
//				{
//					cout << "��������ɹ���" << endl;
//					m_ListCon.push_back(i);
//
//					//����Ϊ��m_mutex��������mBguard�����Ĺ�ϵ�ͷŵ�������ָ��unlock();
//					std::mutex* mp = mDguard.release();
//					mp->unlock();
//				}
//				else
//				{
//					cout << "����û����ס�����Ըɵ������顣" << endl;
//				}
//				m_ConVar.notify_one();
//			}
//			cout << "д��list��������Ϊ��" << i << endl;
//		}
//	}
//
//	bool OutputReadData(int& tCommand)
//	{
//		std::unique_lock<std::mutex> mCguard(m_mutex);
//		
//		//wait()�����ȶ���
//		//����ڶ���lambda���ʽ����ֵΪtrue����ôwait()ֱ�ӷ��أ�
//		//����ڶ���lambda���ʽ����ֵΪfalse����ôwait()���������������������ڱ��У��������������ط�����notify_one()��Ա����Ϊֹ��
//		//���wait()û�еڶ�����������ôĬ�Ϸ���false
//		//�������߳���notify_one()������ԭ��������wait()ʱ��wait�ͻ᲻�ϵĳ��Ի�ȡ�������ڼ�������ֱ����ȡ��Ϊֹ
//			//Ȼ�����lambda���ʽ�����жϣ��������false����wait()���������������������ڱ��У��������������ط�����notify_one()��Ա����Ϊֹ��
//										  //�������true��������ִ��
//		//
//		m_ConVar.wait(mCguard, [this]
//			{
//				if (!m_ListCon.empty())
//					return true;
//				return false;
//			}
//		);
//		tCommand = m_ListCon.front();//����������һ��Ԫ�ص�ֵ
//		//cout << tCommand << endl;
//		m_ListCon.pop_front();//��ȡ֮����ɾ������������Ҫ��Ԫ����
//		mCguard.unlock();
//		cout << "ȡ����һ�����ݣ�" << tCommand << endl;
//		return true;
//	}
//
//	void OutputData()
//	{
//		for (int i = 1; i < 10000; i++)
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
//	std::condition_variable m_ConVar;//����һ��m_ConVar������������condition_variable��һ����������ص��࣬˵���˾���һ���ȴ��������
//									 //�������Ҫ��ϻ��������й������õ�ʱ������Ҫ�����������
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