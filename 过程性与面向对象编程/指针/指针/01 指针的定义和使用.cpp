#include<iostream>
using namespace std;

int main1()
{
	int ma=10;
	int *p;
	cout<<"ma��ֵΪ: "<<ma<<endl;
	p=&ma;

	*p=523;

	cout<<"*p��ֵΪ: "<<*p<<endl;
	cout<<"ma��ֵΪ: "<<ma<<endl;

	system("pause");
	return 0;
}
