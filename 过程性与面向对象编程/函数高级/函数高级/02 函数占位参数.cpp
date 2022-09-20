#include<iostream>
using namespace std;

//占位参数，不用写形参名称，可以选择赋值或者不赋值
void func2(int a,int ,int c=20)
{
	cout<<"this func2"<<endl;
}


void func3(int a3,int =20,int c3=100);

int main2()
{
	func2(5,10);
	func3(5);
	system("pause");
	return 0;
}

void func3(int a3,int ,int c3)
{
	cout<<"this func3"<<endl;
}