//#include<iostream>
//#include<list>
//#include<thread>
//#include<mutex>
//
////两个mutex对象及以上才会出现死锁情况（一种例子：你锁住了我，我锁住了你）
////三种解决死锁的方法：
////1、每次lock()时都按照顺序加锁m_mutex.lock();m_mutex2.lock();那么在其余地方也时m_mutex.lock();m_mutex2.lock();按照这个顺序加锁
////2、或者用std::lock(m_mutex, m_mutex2);当其中一个无法加锁，那么两个都不会加锁;只有两个锁对象都能成功加锁时，才可以成功的锁住（lock()）两个对象
////	 但是最后还是要手动解锁 m_mutex2.unlock();m_mutex.unlock();
////3、用std::lock(m_mutex, m_mutex2);解锁时std::lock_guard<std::mutex> mBguard(m_mutex,std::adopt_lock);std::lock_guard<std::mutex> mCguard(m_mutex2, std::adopt_lock);
////	 adopt_lock表示在使用lock_guard锁时，不用再次加锁（构造函数）了，只需要解锁（析构函数）操作
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
//				//std::lock_guard<std::mutex> mAguard(m_mutex);//只能加锁、解锁，在开始定义时就lock()了，作用域结束时unlock()（这里花括号就是它的作用域）;
//				/*m_mutex.lock();
//				m_mutex2.lock();*/
//				std::lock(m_mutex, m_mutex2);
//				m_ListCon.push_back(i);
//				std::lock_guard<std::mutex> mBguard(m_mutex,std::adopt_lock);
//				std::lock_guard<std::mutex> mCguard(m_mutex2,std::adopt_lock);
//				/*m_mutex2.unlock();
//				m_mutex.unlock();*/
//			}
//			cout << "写入list容器数据为：" << i << endl;
//		}
//	}
//
//	bool OutputReadData(int& tCommand)
//	{
//		m_mutex2.lock();
//		m_mutex.lock();
//		if (m_ListCon.empty())
//		{
//			cout << "容器为空！" << endl;
//			m_mutex.unlock();
//			m_mutex2.unlock();
//			return false;
//		}
//		else
//		{
//			tCommand = m_ListCon.front();//返回容器第一个元素的值
//			cout << tCommand << endl;
//			m_ListCon.pop_front();//读取之后又删除它，不再需要该元素了
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