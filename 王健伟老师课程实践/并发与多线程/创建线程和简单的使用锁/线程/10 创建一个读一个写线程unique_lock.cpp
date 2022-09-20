//#include<iostream>
//#include<list>
//#include<thread>
//#include<mutex>
////#include<Windows.h>//包含这个头文件就可以Sleep(1000);//睡一秒
//
////unique_lock 拥有和lock_guard一样的功能，且功能比lock_guard更多
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
//				//std::lock_guard<std::mutex> mAguard(m_mutex);//只能加锁、解锁，在开始定义时就lock()了，作用域结束时unlock()（这里花括号就是它的作用域）
//				//std::unique_lock<std::mutex> mBguard(m_mutex);
//				m_mutex.lock();
//				std::unique_lock<std::mutex> mBguard(m_mutex,adopt_lock);
//
//				//睡2000ms
//				std::chrono::milliseconds mdura(2000);
//				std::this_thread::sleep_for(mdura);
//				
//				//m_mutex.lock();
//				m_ListCon.push_back(i);
//				//m_mutex.unlock();
//			}
//			cout << "写入list容器数据为：" << i << endl;
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
//				cout << "容器为空！" << endl;
//				//m_mutex.unlock();
//				return false;
//			}
//			else
//			{
//				tCommand = m_ListCon.front();//返回容器第一个元素的值
//				cout << tCommand << endl;
//				m_ListCon.pop_front();//读取之后又删除它，不再需要该元素了
//				//m_mutex.unlock();
//				return true;
//			}
//		}
//		else
//		{
//			cout << "OutputReadData没有lock()住！" << endl;
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
//				cout << "读取第一个元素成功！" << endl;
//			}
//			else
//			{
//				cout << "容器中没有元素！" << endl;
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