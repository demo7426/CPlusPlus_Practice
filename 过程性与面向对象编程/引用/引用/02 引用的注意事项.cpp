#include<iostream>
using namespace std;

int main2()
{
	int a=10;
	//int &b;//�����ʼ��
	int &b=a;//a��b��ָ��ͬһ���ڴ�
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	int c=20;
	b=c;//��ֵ
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	system("pause");
	return 0;
}