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
//	cout<<"Phone构造函数"<<endl;
//}
//
//Phone::~Phone()
//{
//	cout<<"Phone析构函数"<<endl;
//}
//
//class Person
//{
//public:
//	Person(string name,string pname);
//	~Person();
//	
//	string m_Name;//人名
//	Phone m_sPName;//类对象   //等同于:Phone m_sPName=mName隐式转换法或者为Phone m_sPName=Phone (mName)显示法
//private:
//
//};
//
//Person::Person(string name,string pname):m_Name(name),m_sPName(pname)
//{
//	cout<<"Person构造函数"<<endl;
//}
//
//Person::~Person()
//{
//	cout<<"Person析构函数"<<endl;
//}
//
//void test01()
//{
//	//当类中成员是其它类的对象时，我们称该成员为对象成员
//	//构造的顺序为：先调用对象成员的构造，再调用本类构造
//	//析构的顺序为：先调用本类析构，在调用对象成员的析构
//	Person p1("张三","苹果12pro");
//	cout<<p1.m_Name<<" 有 "<<p1.m_sPName.m_PName<<endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}