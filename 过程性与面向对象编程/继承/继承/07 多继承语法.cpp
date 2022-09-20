//#include<iostream>
//using namespace std;
//#include<string.h>
//
//class Base01
//{
//public:
//	Base01();
//	~Base01();
//	int m_a;
//private:
//
//};
//
//Base01::Base01()
//{
//	m_a=10;
//}
//
//Base01::~Base01()
//{
//}
//class Base02
//{
//public:
//	Base02();
//	~Base02();
//	int m_a;
//private:
//
//};
//
//Base02::Base02()
//{
//	m_a=20;
//}
//
//Base02::~Base02()
//{
//}
//class Son:public Base01,public Base02//可以继承无限多个父类
//{
//public:
//	Son();
//	~Son();
//	int m_b;
//	int m_c;
//private:
//
//};
//
//Son::Son()
//{
//}
//
//Son::~Son()
//{
//}
//void test01()
//{
//	Son ms01;
//	cout<<ms01.Base01::m_a<<endl;
//	cout<<ms01.Base02::m_a<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}