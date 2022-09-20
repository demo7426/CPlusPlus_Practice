//#include<iostream>
//#include<thread>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person() {};
//	~Person() {};
//	void operator()()//仿函数
//	{
//		cout << "线程创建成功！" << endl;
//	}
//private:
//
//};
//
//int main()
//{
//	Person msFirst;
//	thread mth(msFirst);//利用仿函数，可以是类对象达到和普通函数一样的效果
//	mth.join();
//
//	cout << "主线程的创建！" << endl;
//	system("pause");
//	return 0;
//}