#include<iostream>
using namespace std;

int main1()
{
	int a=10;
	int &b=a;//a，b均指向同一块内存,引用的本质是指针常量
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	b=20;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	system("pause");
	return 0;
}