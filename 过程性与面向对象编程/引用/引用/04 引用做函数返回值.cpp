#include<iostream>
using namespace std;

int& Test01()
{
	int a=10;//�ֲ�����������ջ��
	return a;
}

int& Test02()
{
	static int a=10;//��̬����������ȫ����
	return a;
}
int main4()
{
	int& ma=Test01();
	cout<<ma<<endl;
	cout<<ma<<endl;

	int &mb=Test02();
	cout<<mb<<endl;
	cout<<mb<<endl;
	
	Test02()=1000;
	cout<<mb<<endl;
	cout<<mb<<endl;
	system("pause");
	return 0;
}