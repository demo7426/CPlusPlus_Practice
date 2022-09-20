#include<iostream>
using namespace std;
#define gDay 7		//宏常量gday不可更改

int main4()
{
	cout<<"一个星期有："<<gDay<<"天"<<endl;

	const int mMonth=12;//const修饰变量，mMonth不可更改
	cout<<"一年有："<<mMonth<<"个月"<<endl;
	
	system("pause");
	return 0;
}