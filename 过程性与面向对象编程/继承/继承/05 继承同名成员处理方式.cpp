//#include<iostream>
//using namespace std;
//
////���������Կ���ֱ�ӷ��ʵ�������ͬ����Ա��
////����������������Է��ʵ�����ͬ����Ա��
////�������븸����ͬ������ʱ����������ص������е�ͬ����Ա����������������Է��ʵ�����ͬ����Ա������
//class Person
//{
//public:
//	Person();
//	~Person();
//	int m_a;
//	void func()
//	{
//		cout<<"�����޲κ���"<<endl;
//	}
//	void func(int ta)
//	{
//		cout<<"�����вκ���"<<endl;
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
//		cout<<"�����޲κ���"<<endl;
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
//	cout<<"���ࣺ"<<ms02.m_a<<endl;
//
//	Person ms03;
//	cout<<"����: "<<ms03.m_a<<endl;
//
//	ms02.Person::func();
//	ms02.Person::func(20);
//	cout<<"���ࣺ"<<ms02.Person::m_a<<endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}