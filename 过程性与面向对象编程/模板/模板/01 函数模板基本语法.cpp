//#include<iostream>
//using namespace std;
//
////函数模板
//template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要出错，T是一个通用数据类型
//void Swap(T &ta,T &tb)
//{
//	T mtemp=ta;
//	ta=tb;
//	tb=mtemp;
//}
//void test01()
//{
//	int ma=10;
//	int mb=20;
//
//	//1、自动类型推导
//	//Swap(ma,mb);
//
//	//2、显示指定类型
//	Swap<int>(ma,mb);
//	cout<<"ma= "<<ma<<endl;
//	cout<<"mb= "<<mb<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}