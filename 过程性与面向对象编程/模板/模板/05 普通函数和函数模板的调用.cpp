//#include<iostream>
//using namespace std;
//
////普通函数和函数模板的调用规则
////1、如果普通函数和函数模板都可以调用，优先调用普通函数
////2、可以通过空模板参数列表 强制调用 函数模板
////3、函数模板可以发生重载
////4、如果函数模板可以产生更好的匹配，优先调用函数模板
//void MyPrint(int ta,int tb)
//{
//	cout<<"普通函数的调用"<<endl;
//}
//
//template<class T>
//void MyPrint(T ta,T tb)
//{
//	cout<<"函数模板的调用"<<endl;
//}
//
//template<class T>
//void MyPrint(T ta,T tb,T tc)
//{
//	cout<<"函数模板重载的调用"<<endl;
//}
//void test01()
//{
//	int ma=10;
//	int mb=20;
//	char mc='c';
//   	char md='d';
//	MyPrint(ma,mb);//1、如果普通函数和函数模板都可以调用，优先调用普通函数
//	MyPrint<>(ma,mb);//2、可以通过空模板参数列表 强制调用 函数模板
//	MyPrint<>(ma,mb,ma);//3、函数模板可以发生重载
//	MyPrint(mc,md);//4、如果函数模板可以产生更好的匹配，优先调用函数模板
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}