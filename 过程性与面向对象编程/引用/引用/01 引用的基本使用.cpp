#include<iostream>
using namespace std;

int main1()
{
	int a=10;
	int &b=a;//a��b��ָ��ͬһ���ڴ�,���õı�����ָ�볣��
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	b=20;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	system("pause");
	return 0;
}