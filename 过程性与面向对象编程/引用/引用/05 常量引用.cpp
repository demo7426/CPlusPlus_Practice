#include<iostream>
using namespace std;

int Show(const int& a)
{
	//a=10;//const修饰引用，不可修改
	cout<<a<<endl;
	return 0;
}

int main()
{
	int ma=100;
	Show(ma);

	//int &mb=20;//错误
	const int& mb=20;//加入const后，编译器优化了代码，int temp=10;const int& mb=temp;
	cout<<mb<<endl;

	int mc=5;
	int md=15;
	const int *mp1=&mc;
	mp1=&md;
	cout<<*mp1<<endl;
	system("pause");
	return 0;
}