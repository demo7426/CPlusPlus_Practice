//#include<iostream>
//using namespace std;
//#include<thread>
//
//void MyPrint()
//{
//	cout << "开始线程！" << endl;
//	///
//	cout << "结束线程！1" << endl;
//	cout << "结束线程！2" << endl;
//	cout << "结束线程！3" << endl;
//	cout << "结束线程！4" << endl;
//	cout << "结束线程！5" << endl;
//	cout << "结束线程！6" << endl;
//	cout << "结束线程！7" << endl;
//	cout << "结束线程！8" << endl;
//	cout << "结束线程！9" << endl;
//	cout << "结束线程！10" << endl;
//	cout << "结束线程！1" << endl;
//	cout << "结束线程！2" << endl;
//	cout << "结束线程！3" << endl;
//	cout << "结束线程！4" << endl;
//	cout << "结束线程！5" << endl;
//	cout << "结束线程！6" << endl;
//	cout << "结束线程！7" << endl;
//	cout << "结束线程！8" << endl;
//	cout << "结束线程！9" << endl;
//	cout << "结束线程！10" << endl;
//	cout << "结束线程！1" << endl;
//	cout << "结束线程！2" << endl;
//	cout << "结束线程！3" << endl;
//	cout << "结束线程！4" << endl;
//	cout << "结束线程！5" << endl;
//	cout << "结束线程！6" << endl;
//	cout << "结束线程！7" << endl;
//	cout << "结束线程！8" << endl;
//	cout << "结束线程！9" << endl;
//	cout << "结束线程！10" << endl;
//	cout << "结束线程！1" << endl;
//	cout << "结束线程！2" << endl;
//	cout << "结束线程！3" << endl;
//	cout << "结束线程！4" << endl;
//	cout << "结束线程！5" << endl;
//	cout << "结束线程！6" << endl;
//	cout << "结束线程！7" << endl;
//	cout << "结束线程！8" << endl;
//	cout << "结束线程！9" << endl;
//	cout << "结束线程！10" << endl;
//
//}
//int main()
//{
//	thread mth(MyPrint);
//	if (mth.joinable())//mth.joinable()可以判断之前该线程是否join()或者detach()过
//	{
//		cout << "1：没有加入或者分离过线程！" << endl;
//	}
//	else cout << "1：之前加入或者分离过线程" << endl;
//	//mth.join();//阻塞主线程，等待新开的线程执行完，再执行主线程
//	mth.detach();//将两个线程分开，不产生联系，分开执行(在线程detach()之后，不能在join(),因为会报异常)
//	
//	if (mth.joinable())//mth.joinable()可以判断之前该线程是否join()或者detach()过
//	{
//		cout << "2：没有加入或者分离过线程！" << endl;
//	}
//	else cout << "2：之前加入或者分离过线程" << endl;
//	cout << "主线程的执行1" << endl;
//	cout << "主线程的执行2" << endl;
//	cout << "主线程的执行3" << endl;
//	cout << "主线程的执行4" << endl;
//	cout << "主线程的执行5" << endl;
//	cout << "主线程的执行6" << endl;
//	cout << "主线程的执行7" << endl;
//	cout << "主线程的执行8" << endl;
//	cout << "主线程的执行9" << endl;
//	cout << "主线程的执行10" << endl;
//	cout << "主线程的执行11" << endl;
//	cout << "主线程的执行12" << endl;
//	cout << "主线程的执行13" << endl;
//	cout << "主线程的执行14" << endl;
//	cout << "主线程的执行1" << endl;
//	cout << "主线程的执行2" << endl;
//	cout << "主线程的执行3" << endl;
//	cout << "主线程的执行4" << endl;
//	cout << "主线程的执行5" << endl;
//	cout << "主线程的执行6" << endl;
//	cout << "主线程的执行7" << endl;
//	cout << "主线程的执行8" << endl;
//	cout << "主线程的执行9" << endl;
//	cout << "主线程的执行10" << endl;
//	cout << "主线程的执行11" << endl;
//	cout << "主线程的执行12" << endl;
//	cout << "主线程的执行13" << endl;
//	cout << "主线程的执行14" << endl;
//	cout << "主线程的执行1" << endl;
//	cout << "主线程的执行2" << endl;
//	cout << "主线程的执行3" << endl;
//	cout << "主线程的执行4" << endl;
//	cout << "主线程的执行5" << endl;
//	cout << "主线程的执行6" << endl;
//	cout << "主线程的执行7" << endl;
//	cout << "主线程的执行8" << endl;
//	cout << "主线程的执行9" << endl;
//	cout << "主线程的执行10" << endl;
//	cout << "主线程的执行11" << endl;
//	cout << "主线程的执行12" << endl;
//	cout << "主线程的执行13" << endl;
//	cout << "主线程的执行14" << endl;
//	cout << "主线程的执行1" << endl;
//	cout << "主线程的执行2" << endl;
//	cout << "主线程的执行3" << endl;
//	cout << "主线程的执行4" << endl;
//	cout << "主线程的执行5" << endl;
//	cout << "主线程的执行6" << endl;
//	cout << "主线程的执行7" << endl;
//	cout << "主线程的执行8" << endl;
//	cout << "主线程的执行9" << endl;
//	cout << "主线程的执行10" << endl;
//	cout << "主线程的执行11" << endl;
//	cout << "主线程的执行12" << endl;
//	cout << "主线程的执行13" << endl;
//	cout << "主线程的执行14" << endl;
//	cout << "主线程的执行1" << endl;
//	cout << "主线程的执行2" << endl;
//	cout << "主线程的执行3" << endl;
//	cout << "主线程的执行4" << endl;
//	cout << "主线程的执行5" << endl;
//	cout << "主线程的执行6" << endl;
//	cout << "主线程的执行7" << endl;
//	cout << "主线程的执行8" << endl;
//	cout << "主线程的执行9" << endl;
//	cout << "主线程的执行10" << endl;
//	cout << "主线程的执行11" << endl;
//	cout << "主线程的执行12" << endl;
//	cout << "主线程的执行13" << endl;
//	cout << "主线程的执行14" << endl;
//	system("pause");
//	return 0;
//}