//#include<iostream>
//using namespace std;
//
//class person2
//{
//public:
//	person2();
//	person2(int ta);
//	person2(const person2& tb);
//	~person2();
//
//	int m_Age;
//private:
//
//};
//
////构造函数分类
////按照参数分类分为有参构造和无参构造  无参构造又成为默认构造函数
////按照类型分为普通构造和拷贝构造
//person2::person2()//无参构造
//{
//	cout<<"普通构造函数的调用"<<endl;
//}
//
//person2::person2(int ta)//有参构造
//{
//	m_Age=ta;
//	cout<<"有参构造函数的调用"<<endl;
//}
//
//person2::person2(const person2& tb)//拷贝构造
//{
//	m_Age=tb.m_Age;
//	cout<<m_Age<<endl;
//	cout<<"拷贝构造函数的调用"<<endl;
//}
//
//person2::~person2()
//{
//	cout<<"析构函数的调用"<<endl;
//}
//
//void test2()
//{
//	//1、括号法
//	person2 ms1;//ms1这个类对象放在栈区，调用函数之后立即释放
//	person2 ms2(10);
//	person2 ms3(ms2);
//
//	//2、显示法
//	person2 ms4=person2(5);
//	person2 ms5=person2(ms4);
//	//person(5)单独写就是匿名对象，当前行结束后，马上析构
//
//	//3、隐式转换法
//	person2 ms6=6;
//	person2 ms7=ms6;
//
//}
//int main2()
//{
//	test2();
//
//	system("pause");//终止，ms2来不及释放，关闭程序的一瞬间会调用析构函数
//	return 0;
//}