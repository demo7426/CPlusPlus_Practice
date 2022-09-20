//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person();
//	~Person();
//	int m_a;//非静态成员变量，属于类的对象上
//	static int m_b;//静态成员变量，不属于类的对象上
//	void func01(){};//静态成员函数，不属于类的对象上
//	static void func02(){};//非静态成员函数，不属于类的对象上
//private:
//
//};
//int Person::m_b=10;
//
//Person::Person()
//{
//}
//
//Person::~Person()
//{
//}
//int main()
//{
//	Person ms;
//	//空对象占用内存空间为：1
//	//C++编译器会给每个空对象也分配一个字节的空间，为了区分对象所占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//
//	cout<<"类所占空间大小"<<sizeof(ms)<<"字节"<<endl;
//	system("pause");
//	return 0;
//}