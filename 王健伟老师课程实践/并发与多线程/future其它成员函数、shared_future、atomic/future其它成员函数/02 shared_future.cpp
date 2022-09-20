//#include<iostream>
//#include<future>
//
//using namespace std;
//
////std::shared_future<变量类型>可以get多次,std::future<变量类型>只能get一次 
//double MyThread(double ta)//第一个线程（写入数据）
//{
//	cout << "第一个线程开始执行！" << endl;
//	cout << "第一线程id = " << std::this_thread::get_id << endl;
//	std::chrono::milliseconds mdura(3000);
//	std::this_thread::sleep_for(mdura);
//	cout << "第一个线程执行完毕！" << endl;
//	return ta;
//}
//
//void MyThread2(std::shared_future<double> &ta)
//{
//	cout << "第二个线程开始执行！" << endl;
//	cout << "第二线程的id = " << std::this_thread::get_id << endl;
//	cout << "第一线程返回值为：" << ta.get() << endl;
//	cout << "第一线程返回值为：" << ta.get() << endl;
//	cout << "第二个线程执行完毕！" << endl;
//}
//
//int main()
//{
//	cout << "进程开始执行\n";
//	cout << "进程id = " << std::this_thread::get_id << endl;
//	std::packaged_task<double(double)> mPatask(MyThread);
//	std::thread ms(std::ref(mPatask),5.2);
//	ms.join();
//
//	std::future<double> mResult = mPatask.get_future();
//	bool mValue = mResult.valid();//判断mResult是否为empty
//	//std::shared_future<double> mResult_s(std::move(mResult));
//	std::shared_future<double> mResult_s(mResult.share());
//	mValue = mResult.valid();
//	std::thread ms2(MyThread2, std::ref(mResult_s));
//	ms2.join();
//
//	cout << "进程执行完毕\n";
//	return 0;
//}