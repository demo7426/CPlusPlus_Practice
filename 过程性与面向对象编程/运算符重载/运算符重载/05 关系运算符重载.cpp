//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	Person(string tName,int tAge);
//	~Person();
//	string m_Name;//����
//	int m_Age;//����
//
//	bool operator==(Person tms)
//	{
//		if (m_Age==tms.m_Age&&m_Name==tms.m_Name)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(Person tms)
//	{
//		if (m_Age==tms.m_Age&&m_Name==tms.m_Name)
//		{
//			return false;
//		}
//		return true;
//	}
//private:
//
//};
//
//Person::Person(string tName,int tAge)
//{
//	m_Name=tName;
//	m_Age=tAge;
//}
//
//Person::~Person()
//{
//}
//
//void test01()
//{
//	Person ms01("����",18);
//	Person ms02("����",18);
//	if(ms01==ms02)
//	{
//		cout<<"����"<<endl;
//	}
//	else
//	{
//		cout<<"������"<<endl;
//	}
//	if(ms01!=ms02)
//	{
//		cout<<"������"<<endl;
//	}
//	else
//	{
//		cout<<"����"<<endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}