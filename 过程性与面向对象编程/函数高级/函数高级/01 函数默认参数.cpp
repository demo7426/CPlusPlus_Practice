#include<iostream>
using namespace std;

//1�����ĳ��λ���β���Ĭ��ֵ����ô�����λ�ÿ�ʼ��������β�Ҳ������Ĭ��ֵ
//2������������ʵ��֮�У�ֻ��ѡ��һ�����β�Ĭ��ֵ

//int func1(int a,int b=10,int c)//����
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