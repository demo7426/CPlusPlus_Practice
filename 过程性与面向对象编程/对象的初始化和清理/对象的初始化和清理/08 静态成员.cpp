//#include<iostream>
//using namespace std;
//#include<string>
//
////下面类中的static int m_a;是属于Person类的，不属于某个对象，当通过对象改变m_a的值为20时，用另外一个对象调用m_a的值已经是20了
////在初始化时就会给静态成员变量(类内定义、类外赋值)和静态成员函数分配地址了
////非静态成员变量是在用户调用时才分配栈区地址
//
//class Person
//{
//public:
//	Person();
//	~Person();
//	static int m_a;//静态成员变量类内定义
//	int m_b;
//	static void Set()
//	{
//		m_a=100;
//		//m_b=20;//静态成员函数只能访问静态成员变量
//		cout<<m_a<<endl;
//	}
//private:
//
//};
//int Person::m_a=10;//静态成员变量类外赋值
//Person::Person()
//{
//}
//
//Person::~Person()
//{
//}
//
//void test01()
//{
//	Person::Set();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}