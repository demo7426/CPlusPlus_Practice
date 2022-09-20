//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(){};
//	Person(int ta);
//	~Person();
//	int m_Age;
//
//	Person& Add(Person& tp)
//	{
//		this->m_Age+=tp.m_Age;
//		return *this;
//	}
//private:
//
//};
//
////this指针指向被调用的函数所属的对象
//Person::Person(int m_Age)
//{
//	this->m_Age=m_Age;
//}
//
//Person::~Person()
//{
//}
//
////1、解决名称冲突
//void test01()
//{
//	Person ms(5);
//	cout<<ms.m_Age<<endl;
//}
//
////2、返回对象本身用*this
//void test02()
//{
//	Person ms2(5);
//	Person ms3(10);
//	ms3.Add(ms2).Add(ms2).Add(ms2);
//	cout<<ms3.m_Age<<endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}