#include<iostream>
using namespace std;

void MuSwap1(int a,int b)//ֵ���ݣ��ββ���ı�ʵ��
{
	int temp=a;
	a=b;
	b=temp;
}

void MuSwap2(int* a,int* b)//ָ�봫�ݣ��βλ�ı�ʵ��
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void MuSwap3(int &a,int &b)//���ô��ݣ��βλ�ı�ʵ��
{
	int temp=a;
	a=b;
	b=temp;
}
int main3()
{
	int ma=10;
	int mb=20;
	cout<<"ԭ����ma="<<ma<<endl;
	cout<<"ԭ����mb="<<mb<<endl;

	MuSwap1(ma,mb);
	cout<<"ֵ����ma="<<ma<<endl;
	cout<<"ֵ����mb="<<mb<<endl;

	MuSwap2(&ma,&mb);
	cout<<"ָ�봫��ma="<<ma<<endl;
	cout<<"ָ�봫��mb="<<mb<<endl;
	
	int ma3=10;
	int mb3=20;
	MuSwap3(ma3,mb3);
	cout<<"���ô���ma3="<<ma3<<endl;
	cout<<"���ô���mb3="<<mb3<<endl;
	system("pause");
	return 0;
}