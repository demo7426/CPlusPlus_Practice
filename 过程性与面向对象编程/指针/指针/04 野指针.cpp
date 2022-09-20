#include<iostream>
using namespace std;

int main4()
{
	int ma=10;
	int* p=(int*) 0x1200;//野指针，没有访问0x1200这个地址的权限
	*p=520;

	cout<<*p<<endl;
	system("pause");
	return 0;
}
//空指针和野指针我们一般不要去申请访问，容易出错