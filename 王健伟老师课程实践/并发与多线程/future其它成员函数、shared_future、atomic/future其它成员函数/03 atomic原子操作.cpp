//#include<iostream>
//#include<thread>
//#include<mutex>
//using namespace std;
//
////std::atomic只能针对单个语句
////mutex gMutex;互斥量可以针对多个语句
//std::atomic<int> gNumber = 0;
////mutex gMutex;
//void MyThread()
//{
//	for (int i = 0; i < 1000000; i++)
//	{
//		//gMutex.lock();
//		gNumber++;
//		//gMutex.unlock();
//	}
//}
//
//int main()
//{
//	//原子操作只适用于++，--，+=，-=，*=，|=，^=这几种情况，例如i = i + 1;是不满足原子性的
//	thread ms(MyThread);
//	thread ms2(MyThread);
//	ms.join();
//	ms2.join();
//	cout << "gNumber = " << gNumber << endl;
//
//	return 0;
//}