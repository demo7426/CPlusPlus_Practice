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
//	//1����Ա��������+��
//	Person operator+(Person& tp01)
//	{
//		Person mtemp01;
//		mtemp01.m_a=this->m_a+tp01.m_a;
//		mtemp01.m_b=this->m_b+tp01.m_b;
//		return mtemp01;
//	}
//private:
//
//};
////2��ȫ�ֺ�������+��
////Person operator+(Person& tp02,Person& tp03)
////{
////	Person mtemp01;
////	mtemp01.m_a=tp02.m_a+tp03.m_a;
////	mtemp01.m_b=tp02.m_b+tp03.m_b;
////	return mtemp01;
////}
//
////3�����������Ҳ���Է�����������
//Person operator+(Person& tp02,int tm01)
//{
//	Person mtemp01;
//	mtemp01.m_a=tp02.m_a+tm01;
//	mtemp01.m_b=tp02.m_b+tm01;
//	return mtemp01;
//}
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
//	Person p01;
//	p01.m_a=10;
//	p01.m_b=20;
//	Person p02;
//	p02.m_a=5;
//	p02.m_b=10;
//	Person p03;
//	//1����Ա��������+��,��ͬ��p03=p01.operator+(p02);
//	//2��ȫ�ֺ�������+��,��ͬ��p03=operator+(p01,p02);
//	p03=p01+p02;
//	//p03=p01+10;//3����������
//	cout<<p03.m_a<<endl;
//	cout<<p03.m_b<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}