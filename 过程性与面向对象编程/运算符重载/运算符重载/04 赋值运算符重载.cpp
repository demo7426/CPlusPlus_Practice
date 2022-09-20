//#include<iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	Person(int ta);
//	~Person();
//	int* m_p;
//
//	Person& operator=(Person& tp)
//	{
//		//编译器提供的是浅拷贝
//		//m_p=tp.m_p;
//
//		//应该先判断是否有属性在堆区，如果有则需要先释放，再深拷贝
//		if (m_p!=NULL)
//		{
//			delete m_p;
//			m_p=NULL;
//		}
//		//深拷贝
//		m_p=new int(*tp.m_p);
//		//
//		return *this;
//	}
//private:
//
//};
//
//Person::Person(int ta)
//{
//	m_p=new int(ta);
//}
//
//Person::~Person()
//{
//	if (m_p!=NULL)
//	{
//		delete m_p;
//		m_p=NULL;
//	}
//}
//
//void test01()
//{
//	Person ms01(10);
//	Person ms02(20);
//	ms02=ms01;
//	cout<<*ms02.m_p<<endl;
//
//	Person ms03(30);
//	ms03=ms02=ms01;
//	cout<<*ms03.m_p<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}