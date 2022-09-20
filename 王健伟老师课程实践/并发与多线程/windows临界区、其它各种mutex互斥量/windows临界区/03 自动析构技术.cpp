//#include<iostream>
//#include<list>
//#include<thread>
//#include<mutex>
//#include<Windows.h>
//using namespace std;
//
////本类用于自动释放windows下的临界区，防止忘记LeaveCriticalSection导致死锁的情况发生，类似于c++11中的std::lock_guard<std::mutex> ...
//class WindowsLock//RAII类（resource acquire is initialization）中文“资源获取即初始化”
//				 //容器，智能指针都属于RAII类
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
//				std::lock_guard<std::mutex> mAguard(m_mutex);//只能加锁、解锁，在开始定义时就lock()了，作用域结束时unlock()（这里花括号就是它的作用域）;
//								//m_mutex.lock();
//				m_ListCon.push_back(i);
//				//m_mutex.unlock();
//#endif // _WINDOWCS
//
//
//			}
//			cout << "写入list容器数据为：" << i << endl;
//		}
//	}
//
//	bool OutputReadData(int& tCommand)
//	{
//#ifdef _WINDOWCS
//		EnterCriticalSection(&m_WinSec);
//		if (m_ListCon.empty())
//		{
//			cout << "容器为空！" << endl;
//			LeaveCriticalSection(&m_WinSec);
//			return false;
//		}
//		else
//		{
//			tCommand = m_ListCon.front();//返回容器第一个元素的值
//			cout << tCommand << endl;
//			m_ListCon.pop_front();//读取之后又删除它，不再需要该元素了
//			LeaveCriticalSection(&m_WinSec);
//			return true;
//		}
//#else
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