//#include<iostream>
//#include<list>
//#include<thread>
//#include<mutex>
//
////lock_guard 等价于lock()、unlock()这两个加锁解锁的功能
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
//				std::lock_guard<std::mutex> mAguard(m_mutex);//只能加锁、解锁，在开始定义时就lock()了，作用域结束时unlock()（这里花括号就是它的作用域）;
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
//		m_mutex.lock();
//		if (m_ListCon.empty())
//		{
//			cout << "容器为空！" << endl;
//			m_mutex.unlock();
//			return false;
//		}
//		else
//		{
//			tCommand = m_ListCon.front();//返回容器第一个元素的值
//			cout << tCommand << endl;
//			m_ListCon.pop_front();//读取之后又删除它，不再需要该元素了
//			m_mutex.unlock();
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
//	std::mutex m_mutex;//m_mutex为互斥量
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