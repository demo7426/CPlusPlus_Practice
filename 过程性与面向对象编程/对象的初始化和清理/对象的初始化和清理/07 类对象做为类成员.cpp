//#include<iostream>
//using namespace std;
//#include<string>
//class Phone
//{
//public:
//	Phone(string mName);
//	~Phone();
//	string m_PName;
//
//private:
//
//};
//
//Phone::Phone(string mName)
//{
//	m_PName=mName;
//	cout<<"Phone���캯��"<<endl;
//}
//
//Phone::~Phone()
//{
//	cout<<"Phone��������"<<endl;
//}
//
//class Person
//{
//public:
//	Person(string name,string pname);
//	~Person();
//	
//	string m_Name;//����
//	Phone m_sPName;//�����   //��ͬ��:Phone m_sPName=mName��ʽת��������ΪPhone m_sPName=Phone (mName)��ʾ��
//private:
//
//};
//
//Person::Person(string name,string pname):m_Name(name),m_sPName(pname)
//{
//	cout<<"Person���캯��"<<endl;
//}
//
//Person::~Person()
//{
//	cout<<"Person��������"<<endl;
//}
//
//void test01()
//{
//	//�����г�Ա��������Ķ���ʱ�����ǳƸó�ԱΪ�����Ա
//	//�����˳��Ϊ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
//	//������˳��Ϊ���ȵ��ñ����������ڵ��ö����Ա������
//	Person p1("����","ƻ��12pro");
//	cout<<p1.m_Name<<" �� "<<p1.m_sPName.m_PName<<endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}