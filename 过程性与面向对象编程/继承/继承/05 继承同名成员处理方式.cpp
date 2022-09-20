//#include<iostream>
//using namespace std;
//
////子类对象可以可以直接访问到子类中同名成员。
////子类对象加作用域可以访问到父类同名成员。
////当子类与父类有同名函数时，子类会隐藏掉父类中的同名成员函数，加作用域可以访问到父类同名成员函数。
//class Person
//{
//public:
//	Person();
//	~Person();
//	int m_a;
//	void func()
//	{
//		cout<<"父类无参函数"<<endl;
//	}
//	void func(int ta)
//	{
//		cout<<"父类有参函数"<<endl;
//	}
//};
//
//Person::Person()
//{m_a=100;}
//Person::~Person()
//{}
//
//class Person02:public Person
//{
//public:
//	Person02();
//	~Person02();
//	int m_a;
//	void func()
//	{
//		cout<<"子类无参函数"<<endl;
//	}
//private:
//
//};
//
//Person02::Person02()
//{m_a=200;}
//Person02::~Person02()
//{}
//
//void test01()
//{
//	Person02 ms02;
//	ms02.func();
//	cout<<"子类："<<ms02.m_a<<endl;
//
//	Person ms03;
//	cout<<"父类: "<<ms03.m_a<<endl;
//
//	ms02.Person::func();
//	ms02.Person::func(20);
//	cout<<"父类："<<ms02.Person::m_a<<endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}