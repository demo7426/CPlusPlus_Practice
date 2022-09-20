#include<iostream>
using namespace std;

//引用做为重载条件
void func(int& a)
{
	cout<<"int& a"<<endl;
}

void func(const int& a)
{
	cout<<"const int& a"<<endl;
}

//函数重载碰到函数默认参数
//void func(int a,int b=10)
//{
//	cout<<"int a,int =10"<<endl;
//}
//
//void func(int a)
//{
//	cout<<"int a"<<endl;
//}

int main()
{
	int ma=10;
	func(ma);
	func(10);
	//func(5);
	system("pause");
	return 0;
}

