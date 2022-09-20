//#include<iostream>
//using namespace std;
//#include<string.h>
//
//class Base
//{
//public:
//	Base();
//	~Base();
//	static int m_a;
//	static void func()
//	{
//		cout<<"父类中的无参func函数"<<endl;
//	}
//
//	static void func(int ta)
//	{
//		cout<<"父类中的有参func函数"<<endl;
//	}
//private:
//
//};
//int Base::m_a=200;
//Base::Base()
//{
//}
//
//Base::~Base()
//{
//}
//class Son:public Base
//{
//public:
//	Son();
//	~Son();
//	static int m_a;
//	static void func()
//	{
//		cout<<"子类中的无参func函数"<<endl;
//	}
//private:
//
//};
//int Son::m_a=100;
//Son::Son()
//{
//}
//
//Son::~Son()
//{
//}
//void test01()
//{
//	//1、通过创建子类对象访问
//	Son ms01;
//	cout<<"子类中的m_a= "<<ms01.m_a<<endl;
//	cout<<"父类中的m_a= "<<ms01.Base::m_a<<endl;
//	
//	//2、因为静态成员创建在堆区，具有唯一性，所以可以通过类访问
//	cout<<"子类中的m_a= "<<Son::m_a<<endl;
//	cout<<"父类中的m_a= "<<Son::Base::m_a<<endl;
//
//	//子类中如果出现和父类同名的静态成员函数，也会隐藏掉父类中所有同名的成员函数
//	//如果想访问父类中被隐藏的同名成员函数，需要加作用域
//	Son::Base::func(10);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}