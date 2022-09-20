#include<iostream>
using namespace std;

int main3()
{
	//指针无法访问0~255的系统内存单元
	int ma=10;
	int* p=NULL;
	*p=520;

	cout<<*p<<endl;
	system("pause");
	return 0;
}
