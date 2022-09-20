#include<iostream>
using namespace std;

int& Test01()
{
	int a=10;//局部变量放在了栈区
	return a;
}

int& Test02()
{
	static int a=10;//静态变量放在了全局区
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