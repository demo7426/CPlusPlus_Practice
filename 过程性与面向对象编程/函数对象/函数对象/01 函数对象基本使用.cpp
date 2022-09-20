//#include<iostream>
//using namespace std;
//#include<string>
//
////1、函数对象在使用的时候，可以像普通函数那样调用，可以有参数，可以有返回值
//class MyAdd
//{
//public:
//	MyAdd(){};
//	~MyAdd(){};
//	int operator()(int ta,int tb)
//	{
//		return ta+tb;
//	}
//
//private:
//
//};
//
////2、函数对象可以有自己的状态
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		m_Number=0;
//	};
//	~MyPrint(){};
//
//	void operator()(string ta)
//	{
//		cout<<ta<<endl;
//		m_Number++;//统计次数
//	}
//	int m_Number;//内部自己的状态
//private:
//
//};
//
//
//void Test01()
//{
//	MyAdd ms01;
//	cout<<ms01(10,20)<<endl;;
//}
//
//void Test02()
//{
//	MyPrint ms02;
//	ms02("张飞");
//	ms02("刘备");
//	ms02("关羽");
//	cout<<"MyPrint调用次数："<<ms02.m_Number<<"次"<<endl;
//}
//
////3、函数对象可以作为参数传递
//void DoPrint(MyPrint &ta,string tb)
//{
//	ta(tb);
//}
//void Test03()
//{
//	MyPrint ms03;
//	DoPrint(ms03,"常山赵子龙");
//}
//int main()
//{
//	Test01();	
//	Test02();
//	Test03();
//	system("pause");
//	return 0;
//}