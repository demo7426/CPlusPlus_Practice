#include<iostream>
using namespace std;

int main5()
{
	int ma=10;
	int mb=20;
	int* const p=&ma;//指针常量
	*p=15;
	//p=&mb;//错误
	cout<<"*p的值为： "<<*p<<endl;

	const int * p2=&ma;//常量指针
	p2=&mb;
	//*p1=100;//错误
	cout<<"*p2的值为： "<<*p2<<endl;

	const int * const p3=&ma;//const既修饰指针，也修饰常量
	//p3=&mb;//错误
	//*p3=100;//错误
	cout<<"*p3的值为： "<<*p3<<endl;

	system("pause");
	return 0;
}
