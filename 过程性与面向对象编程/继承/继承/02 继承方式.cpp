//#include<iostream>
//using namespace std;
//
////继承
////父类所有私有成员子类均无法访问
////子类公有继承父类:public->public	  protected->protected
////子类保护继承父类:public->protected  protected->protected
////子类私有继承父类:public->private	  protected->private
//class Person
//{
//public:
//	Person();
//	~Person();
//	int m_a;
//private:
//
//};
//
//Person::Person()
//{
//}
//
//Person::~Person()
//{
//}
//
//class Person02:public Person
//{
//public:
//	Person02();
//	~Person02();
//
//private:
//
//};
//
//Person02::Person02()
//{
//	m_a=10;
//	cout<<m_a<<endl;
//}
//
//Person02::~Person02()
//{
//}
//int main()
//{
//	Person02 ms02;
//	system("pause");
//	return 0;
//}