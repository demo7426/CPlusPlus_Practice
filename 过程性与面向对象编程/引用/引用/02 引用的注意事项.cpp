#include<iostream>
using namespace std;

int main2()
{
	int a=10;
	//int &b;//必须初始化
	int &b=a;//a，b均指向同一块内存
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	int c=20;
	b=c;//赋值
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	system("pause");
	return 0;
}