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
//		cout<<"�����е��޲�func����"<<endl;
//	}
//
//	static void func(int ta)
//	{
//		cout<<"�����е��в�func����"<<endl;
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
//		cout<<"�����е��޲�func����"<<endl;
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
//	//1��ͨ����������������
//	Son ms01;
//	cout<<"�����е�m_a= "<<ms01.m_a<<endl;
//	cout<<"�����е�m_a= "<<ms01.Base::m_a<<endl;
//	
//	//2����Ϊ��̬��Ա�����ڶ���������Ψһ�ԣ����Կ���ͨ�������
//	cout<<"�����е�m_a= "<<Son::m_a<<endl;
//	cout<<"�����е�m_a= "<<Son::Base::m_a<<endl;
//
//	//������������ֺ͸���ͬ���ľ�̬��Ա������Ҳ�����ص�����������ͬ���ĳ�Ա����
//	//�������ʸ����б����ص�ͬ����Ա��������Ҫ��������
//	Son::Base::func(10);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}