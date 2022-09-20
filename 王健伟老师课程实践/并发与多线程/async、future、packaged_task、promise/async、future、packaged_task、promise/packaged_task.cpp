//#include <iostream>
//#include<thread>
//#include<future>
//#include<vector>
//
//using namespace std;
//double MyThreadFunc(int ta)
//{
//	std::cout << "线程开始！" << std::endl;
//	std::cout << ta << std::endl;
//
//	std::chrono::milliseconds mdura(3000);
//	std::this_thread::sleep_for(mdura);
//
//	std::cout << "线程id = " << std::this_thread::get_id() << std::endl;
//	std::cout << "线程结束！" << std::endl;
//	return 5.2;
//}
//
//vector<std::packaged_task<double(int)>> mVec;
//
//int main()
//{
//	//二：std::packaged_task：打包任务，把任务包装起来
//	//std::packaged_task 是个类模板，它的模板参数是各种可调用对象；通过std::packaged_task来把各种可调用对象包装起来，方便作为线程入口函数
//	
//	//1、第一种使用方法
//	//cout << "进程开始！" << endl;
//	//std::cout << "main中进程id = " << std::this_thread::get_id() << std::endl;
//	//std::packaged_task<double(int)> ms(MyThreadFunc);//我们把MyThreadFunc通过packaged_task包装起来
//	//std::thread mThread(std::ref(ms),2);//线程直接开始执行，第二个参数作为线程入口函数的参数
//	//mThread.join();//等待线程执行完毕
//	//std::future<double> mResult = ms.get_future();//std::future包含了线程入口函数的返回结果，这里的mResult保存了线程的返回值
//	//cout << mResult.get() << endl;
//	//cout << "进程结束！" << endl;
//
//	//2、第二种使用方法（用lambda表达式）
//	//cout << "进程开始！" << endl;
//	//std::cout << "main中进程id = " << std::this_thread::get_id() << std::endl;
//	//std::packaged_task<double(int)> ms([](int ta) 
//	//	{
//	//		std::cout << "线程开始！" << std::endl;
//	//		std::cout << ta << std::endl;
//
//	//		std::chrono::milliseconds mdura(3000);
//	//		std::this_thread::sleep_for(mdura);
//
//	//		std::cout << "线程id = " << std::this_thread::get_id() << std::endl;
//	//		std::cout << "线程结束！" << std::endl;
//	//		return 5.2;
//	//	});
//	//std::thread mThread(std::ref(ms), 2);//线程直接开始执行，第二个参数作为线程入口函数的参数
//	//mThread.join();//等待线程执行完毕
//	//std::future<double> mResult = ms.get_future();//std::future包含了线程入口函数的返回结果，这里的mResult保存了线程的返回值
//	//cout << mResult.get() << endl;
//	//cout << "进程结束！" << endl;
//
//	//3、第三种使用方法（用lambda表达式），ms(2);函数直接调用
//	//cout << "进程开始！" << endl;
//	//std::cout << "main中进程id = " << std::this_thread::get_id() << std::endl;
//	//std::packaged_task<double(int)> ms([](int ta)
//	//	{
//	//		std::cout << "线程开始！" << std::endl;
//	//		std::cout << ta << std::endl;
//
//	//		std::chrono::milliseconds mdura(3000);
//	//		std::this_thread::sleep_for(mdura);
//
//	//		std::cout << "线程id = " << std::this_thread::get_id() << std::endl;
//	//		std::cout << "线程结束！" << std::endl;
//	//		return 5.2;
//	//	});
//	//ms(2);//函数直接调用
//	//std::future<double> mResult = ms.get_future();//std::future包含了线程入口函数的返回结果，这里的mResult保存了线程的返回值
//	//cout << mResult.get() << endl;
//	//cout << "进程结束！" << endl;
//
//	//4、第四种使用方法（用lambda表达式），ms(2);函数直接调用,装入vector容器中然后再取出
//	cout << "进程开始！" << endl;
//	std::cout << "main中进程id = " << std::this_thread::get_id() << std::endl;
//	std::packaged_task<double(int)> ms([](int ta)
//		{
//			std::cout << "线程开始！" << std::endl;
//			std::cout << ta << std::endl;
//
//			std::chrono::milliseconds mdura(3000);
//			std::this_thread::sleep_for(mdura);
//
//			std::cout << "线程id = " << std::this_thread::get_id() << std::endl;
//			std::cout << "线程结束！" << std::endl;
//			return 5.2;
//		});
//	mVec.push_back(std::move(ms));
//	std::vector<std::packaged_task<double(int)>>::iterator miter = mVec.begin();
//	std::packaged_task<double(int)> ms2;
//	ms2 = std::move(*miter);
//	mVec.erase(miter);
//	ms2(123);
//	std::future<double> mResult = ms2.get_future();//std::future包含了线程入口函数的返回结果，这里的mResult保存了线程的返回值
//	cout << mResult.get() << endl;
//	cout << "进程结束！" << endl;
//
//	return 0;
//}
