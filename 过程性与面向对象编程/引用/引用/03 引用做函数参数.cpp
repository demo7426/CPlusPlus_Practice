#include<iostream>
using namespace std;

void MuSwap1(int a,int b)//值传递，形参不会改变实参
{
	int temp=a;
	a=b;
	b=temp;
}

void MuSwap2(int* a,int* b)//指针传递，形参会改变实参
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void MuSwap3(int &a,int &b)//引用传递，形参会改变实参
{
	int temp=a;
	a=b;
	b=temp;
}
int main3()
{
	int ma=10;
	int mb=20;
	cout<<"原来的ma="<<ma<<endl;
	cout<<"原来的mb="<<mb<<endl;

	MuSwap1(ma,mb);
	cout<<"值传递ma="<<ma<<endl;
	cout<<"值传递mb="<<mb<<endl;

	MuSwap2(&ma,&mb);
	cout<<"指针传递ma="<<ma<<endl;
	cout<<"指针传递mb="<<mb<<endl;
	
	int ma3=10;
	int mb3=20;
	MuSwap3(ma3,mb3);
	cout<<"引用传递ma3="<<ma3<<endl;
	cout<<"引用传递mb3="<<mb3<<endl;
	system("pause");
	return 0;
}