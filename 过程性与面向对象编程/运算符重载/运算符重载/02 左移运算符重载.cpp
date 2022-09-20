//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person();
//	~Person();
//	int m_a;
//	int m_b;
//
//	//1、成员函数无法重载cout<<p;只能重载p<<cout;
//	/*Person operator+(ostream& out)
//	{}*/
//private:
//
//};
//
//ostream& operator<<(ostream& out,Person& tp01)
//{
//	out<<tp01.m_a<<tp01.m_b;
//	return out;
//}
//
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
//	Person mp01;
//	mp01.m_a=10;
//	mp01.m_b=20;
//	cout<<mp01<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}