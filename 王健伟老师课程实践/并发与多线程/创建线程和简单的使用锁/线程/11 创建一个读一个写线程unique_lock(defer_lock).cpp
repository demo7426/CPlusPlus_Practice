#include<iostream>
#include<list>
#include<thread>
#include<mutex>
//#include<Windows.h>//包含这个头文件就可以Sleep(1000);//睡一秒

//unique_lock 拥有和lock_guard一样的功能，且功能比lock_guard更多
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
				unique_lock<mutex> mDguard(std::move(mBguard));//转移所有权（可以同通过函数来转移绑定关系，在函数中实现移动构造https://www.bilibili.com/video/BV1Yb411L7ak?p=8   一小时二十三分钟）
				
				if (mDguard.try_lock() == true)
				{
					cout << "输入锁住了！" << endl;
					m_ListCon.push_back(i);

					//下列为将m_mutex互斥量和mBguard类对象的关系释放掉，返回指针unlock();
					std::mutex *mp = mDguard.release();
					mp->unlock();
				}
				else
				{
					cout << "输入没有锁住，可以干点别的事情。" << endl;
				}

				//mBguard.lock();
				//mBguard.unlock();
				//......可以写一些非共享的代码
				//mBguard.lock();
	
				//睡2000ms
				/*std::chrono::milliseconds mdura(2000);
				std::this_thread::sleep_for(mdura);*/

				//mBguard.unlock();//画蛇添足。因为上面有std::unique_lock<std::mutex> mBguard(m_mutex, defer_lock)这个，他会自己在析构函数中释放
			}
			cout << "写入list容器数据为：" << i << endl;
		}
	}

	bool OutputReadData(int& tCommand)
	{
		std::unique_lock<std::mutex> mCguard(m_mutex, std::try_to_lock);
		if (mCguard.owns_lock())
		{
			if (m_ListCon.empty())
			{
				cout << "容器为空！" << endl;
				return false;
			}
			else
			{
				tCommand = m_ListCon.front();//返回容器第一个元素的值
				cout << tCommand << endl;
				m_ListCon.pop_front();//读取之后又删除它，不再需要该元素了
				return true;
			}
		}
		else
		{
			cout << "OutputReadData没有lock()住！" << endl;
		}
	}

	void OutputData()
	{
		for (int i = 0; i < 1000000; i++)
		{
			int mCommand = 0;
			if (OutputReadData(mCommand))
			{
				cout << "读取第一个元素成功！" << endl;
			}
			else
			{
				cout << "容器中没有元素！" << endl;
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