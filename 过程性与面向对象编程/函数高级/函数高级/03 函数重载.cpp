#include<iostream>
using namespace std;

//�������ص���������
//1��ͬһ����������
//2������������ͬ
//3���������β����Ͳ�ͬ�������βθ�����ͬ�������β�˳��ͬ
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

//�����ķ���ֵ������Ϊ�������ص�����
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

