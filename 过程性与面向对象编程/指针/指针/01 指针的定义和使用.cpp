#include<iostream>
using namespace std;

int main1()
{
	int ma=10;
	int *p;
	cout<<"ma的值为: "<<ma<<endl;
	p=&ma;

	*p=523;

	cout<<"*p的值为: "<<*p<<endl;
	cout<<"ma的值为: "<<ma<<endl;

	system("pause");
	return 0;
}
