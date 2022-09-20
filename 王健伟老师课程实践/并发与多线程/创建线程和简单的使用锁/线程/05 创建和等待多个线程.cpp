//#include<iostream>
//#include<vector>
//#include<thread>
//
//using namespace std;
//
//vector<int>gVecSec = { 1,2,3 };
//
//void MyPrint(int ta)
//{
//	//cout << "线程开始！" << ta << endl;
//	cout << "访问共享数据" << gVecSec[0] << gVecSec[1] << gVecSec[2] << endl;
//	//cout << "线程结束！" << ta << endl;
//}
//
//int main()
//{
//	vector<thread>mVecFirst;
//	for (int i = 0; i < 10; i++)
//	{
//		mVecFirst.push_back(thread(MyPrint,i));//把多个线程放入容器中，更好管理
//	}
//	for (vector<thread>::iterator it = mVecFirst.begin() ; it < mVecFirst.end() ; it++)
//	{
//		it->join();//比it->detach();更加稳定
//	}
//
//	cout << "进程运行！" << endl;
//	//数据共享问题：
//	//只读的时候时最安全的
//	//假如有两个线程在写，八个线程在读，很容易出现错误，所以在一个线程在写的时后，其余线程不能读和写，一个线程在读的时候，尽量不要写(很容易出错)
//	return 0;
//}