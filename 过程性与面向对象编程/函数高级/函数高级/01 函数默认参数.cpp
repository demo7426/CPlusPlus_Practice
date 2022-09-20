#include<iostream>
using namespace std;

//1、如果某个位置形参有默认值，那么从这个位置开始，后面的形参也必须有默认值
//2、函数声明和实现之中，只能选择一个给形参默认值

//int func1(int a,int b=10,int c)//错误
//{
//	return a+b+c;
//}
int func2(int a,int b=10,int c=20)
{
	return a+b+c;
}


int func3(int a3,int b3=20,int c3=100);

int main1()
{
	cout<<func2(5)<<endl;
	cout<<func3(5)<<endl;
	system("pause");
	return 0;
}

int func3(int a3,int b3,int c3)
{
	return a3+b3+c3;
}