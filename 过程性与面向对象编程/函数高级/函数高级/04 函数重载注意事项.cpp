#include<iostream>
using namespace std;

//������Ϊ��������
void func(int& a)
{
	cout<<"int& a"<<endl;
}

void func(const int& a)
{
	cout<<"const int& a"<<endl;
}

//����������������Ĭ�ϲ���
//void func(int a,int b=10)
//{
//	cout<<"int a,int =10"<<endl;
//}
//
//void func(int a)
//{
//	cout<<"int a"<<endl;
//}

int main()
{
	int ma=10;
	func(ma);
	func(10);
	//func(5);
	system("pause");
	return 0;
}

