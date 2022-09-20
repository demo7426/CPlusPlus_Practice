//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person();
//	~Person();
//	int m_a;
//
//	Person& operator++()//«∞÷√++
//	{
//		m_a++;
//		return *this;
//	}
//	Person operator++(int)//∫Û÷√++
//	{
//		Person mtemp=*this;
//		m_a++;
//		return mtemp;
//	}
//private:
//
//};
//
//ostream& operator<<(ostream& out,Person& tp01)
//{
//	out<<tp01.m_a;
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
//	cout<<mp01++<<endl;
//	cout<<mp01<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}