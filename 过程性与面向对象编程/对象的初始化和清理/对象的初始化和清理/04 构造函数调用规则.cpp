//#include<iostream>
//using namespace std;
//
////默认情况下，C++编译默认给类创建三个函数
////分别为无参构造函数、析构函数和拷贝构造函数
//
////构造函数调用规则如下：
////1、如果用户自己定义了有参构造函数，则不再提供无参构造函数，但是依然提供默认拷贝构造函数
////2、如果用户自己定义了拷贝构造函数，则不再提供其它构造函数
//class person
//{
//public:
//	person();
//	person(int ta);
//	person(const person& tb);
//	~person();
//
//	int m_Age;
//private:
//
//};
//
//person::person()//无参构造
//{
//	cout<<"普通构造函数的调用"<<endl;
//}
//
//person::person(int ta)//有参构造
//{
//	m_Age=ta;
//	cout<<"有参构造函数的调用"<<endl;
//}
//
//person::person(const person& tb)//拷贝构造
//{
//	m_Age=tb.m_Age;
//	cout<<"拷贝构造函数的调用"<<endl;
//}
//
//person::~person()
//{
//	cout<<"析构函数的调用"<<endl;
//}
//
////1、使用一个已经创建完毕的对象来初始化一个新对象
//void test03()
//{
//	person ms2(10);
//	person ms3(ms2);
//	cout<<ms2.m_Age<<endl;
//}
//
////2、值传递的方式给函数参数传值
//void DoWork(person tp)
//{
//
//}
//void test04()
//{
//	person ms5;
//	DoWork(ms5);
//}
//
////3、值方式返回局部对象
//person DoWork05()
//{
//	person p5;
//	return p5;
//}
//void test05()
//{
//	person ms6= DoWork05();
//}
//int main()
//{
//	/*test03();
//	test04();*/
//	//test05();
//	system("pause");//终止，ms2来不及释放，关闭程序的一瞬间会调用析构函数
//	return 0;
//}