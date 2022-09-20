//#include<iostream>
//using namespace std;
//#include<string>
//
//template<class T01>
//class Base
//{
//public:
//	Base()
//	{
//		cout<<typeid(T01).name()<<endl;
//	};
//	~Base(){};
//	T01 m_a;
//private:
//
//};
//
//class Son01:public Base<char>
//{
//public:
//	Son01(){};
//	~Son01(){};
//
//private:
//
//};
//
////如果想灵活的使用父类中的T01类型，子类也需要变类模板
//template<class T2,class T3>
//class Son02:public Base<T2>
//{
//public:
//	Son02()
//	{
//		cout<<typeid(T2).name()<<endl;
//		cout<<typeid(T3).name()<<endl;
//	};
//	~Son02(){};
//	T3 m_b;
//private:
//
//};
//
//void test01()
//{
//	Son01 ms01;
//	//Son02<int,string> ms02;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}