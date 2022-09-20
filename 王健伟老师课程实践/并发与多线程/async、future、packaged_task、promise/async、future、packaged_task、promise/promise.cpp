//#include <iostream>
//#include<thread>
//#include<future>
//#include<vector>
//
//using namespace std;
//void MyThreadFunc(std::promise<int> &ta,int tb)
//{
//	cout << "线程开始！" << endl;
//	tb *= 10;
//
//	std::chrono::milliseconds mdura(3000);
//	std::this_thread::sleep_for(mdura);
//
//	ta.set_value(tb);
//	cout << "线程结束！" << endl;
//	return;
//}
//
//vector<std::packaged_task<double(int)>> mVec;
//
//int main()
//{
//	//二：std::promise是个类模板
//	//我们能够在某个线程中赋值，然后我们可以在其它线程中，把这个值取出来用
//	//总结：通过promise保存一个值，在将来的某个时刻我们可以通过把future绑定到这个promise上来得到这个绑定的值
//	cout << "进程开始！" << endl;
//	std::promise<int> ma;
//	std::thread mThread(MyThreadFunc,std::ref(ma),180);
//	mThread.join();
//	std::future<int> mResult = ma.get_future();
//	cout << mResult.get() << endl;
//	cout << "进程结束！" << endl;
//	
//	return 0;
//}
