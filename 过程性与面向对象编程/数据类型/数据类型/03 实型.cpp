#include<iostream>
using namespace std;

int main3()
{
	//显示界面只能显示6位有效数字
	//单精度，4字节（-2^31~2^31-1），7位有效数字
	float mnum1=3.1415926;
	//双精度,8字节，15~16位有效数字
	double mnum2=3.1415926;
	double mnum3=3e-3;
	cout<<"mnum1="<<mnum1<<endl;
	cout<<"mnum2="<<mnum2<<endl;
	cout<<"mnum3="<<mnum3<<endl;
	system("pause");
	return 0;
}