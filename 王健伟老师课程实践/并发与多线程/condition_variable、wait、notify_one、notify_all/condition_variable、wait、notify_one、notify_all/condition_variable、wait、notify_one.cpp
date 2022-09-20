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
//		for (int i = 1; i < 10000; i++)
//		{
//			{
//				std::unique_lock<std::mutex> mBguard(m_mutex, std::defer_lock);
//				unique_lock<mutex> mDguard(std::move(mBguard));//转移所有权（可以同通过函数来转移绑定关系，在函数中实现移动构造https://www.bilibili.com/video/BV1Yb411L7ak?p=8   一小时二十三分钟）
//
//				if (mDguard.try_lock() == true)
//				{
//					cout << "输入加锁成功！" << endl;
//					m_ListCon.push_back(i);
//
//					//下列为将m_mutex互斥量和mBguard类对象的关系释放掉，返回指针unlock();
//					std::mutex* mp = mDguard.release();
//					mp->unlock();
//				}
//				else
//				{
//					cout << "输入没有锁住，可以干点别的事情。" << endl;
//				}
//				m_ConVar.notify_one();
//			}
//			cout << "写入list容器数据为：" << i << endl;
//		}
//	}
//
//	bool OutputReadData(int& tCommand)
//	{
//		std::unique_lock<std::mutex> mCguard(m_mutex);
//		
//		//wait()用来等东西
//		//如果第二个lambda表达式返回值为true，那么wait()直接返回；
//		//如果第二个lambda表达式返回值为false，那么wait()将解锁互斥量，并堵塞在本行；（堵塞到其它地方调用notify_one()成员函数为止）
//		//如果wait()没有第二个参数，那么默认返回false
//		//当其它线程用notify_one()唤醒了原本堵塞的wait()时，wait就会不断的尝试获取锁（等于加锁），直到获取到为止
//			//然后进入lambda表达式进行判断，如果返回false、则wait()将解锁互斥量，并堵塞在本行；（堵塞到其它地方调用notify_one()成员函数为止）
//										  //如果返回true，则往下执行
//		//
//		m_ConVar.wait(mCguard, [this]
//			{
//				if (!m_ListCon.empty())
//					return true;
//				return false;
//			}
//		);
//		tCommand = m_ListCon.front();//返回容器第一个元素的值
//		//cout << tCommand << endl;
//		m_ListCon.pop_front();//读取之后又删除它，不再需要该元素了
//		mCguard.unlock();
//		cout << "取出第一个数据：" << tCommand << endl;
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
//	std::condition_variable m_ConVar;//生成一个m_ConVar的条件变量，condition_variable是一个和条件相关的类，说白了就是一个等待条件达成
//									 //这个类需要配合互斥量进行工作，用的时候我们要生成这个对象
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