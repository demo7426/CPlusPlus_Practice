#include<iostream>
using namespace std;

//函数重载的满足条件
//1、同一个作用域下
//2、函数名称相同
//3、函数的形参类型不同，或者形参个数不同，或者形参顺序不同
void func()
{
	cout<<"1"<<endl;
}

void func(int a)
{
	cout<<"int a"<<endl;
}

void func(double a)
{
	cout<<"double a"<<endl;
}

void func(int a,double b)
{
	cout<<"int a,double b"<<endl;
}

void func(double a,int b)
{
	cout<<"double a,int b"<<endl;
}

//函数的返回值不能作为函数重载的条件
//int func(double a,int b)
//{
//	cout<<"double a,int b"<<endl;
//	return 0;
//}
int main3()
{
	func();
	func(10);
	func(3.14);
	func(10,2.1);
	func(2.1,4);
	system("pause");
	return 0;
}

