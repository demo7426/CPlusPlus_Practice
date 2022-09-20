//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person01
//{
//public:
//	Person01(){};
//	~Person01(){};
//	void ShowPerson01()
//	{
//		cout<<"ShowPerson01 的调用"<<endl;
//	}
//private:
//
//};
//class Person02
//{
//public:
//	Person02(){};
//	~Person02(){};
//	void ShowPerson02()
//	{
//		cout<<"ShowPerson02 的调用"<<endl;
//	}
//private:
//
//};
//
//template<class T>
//class Work
//{
//public:
//	Work(){};
//	~Work(){};
//	T m_s01;
//	void func01()
//	{
//		m_s01.ShowPerson01();
//	}
//	void func02()
//	{
//		m_s01.ShowPerson02();
//	}
//private:
//
//};
//
//void test01()
//{
//	Work<Person01>ms01;
//	ms01.func01();
//	Work<Person02>ms02;
//	ms02.func02();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}