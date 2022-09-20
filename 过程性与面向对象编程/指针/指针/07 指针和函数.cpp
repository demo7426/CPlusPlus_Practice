#include<iostream>
using namespace std;
#include<string>

void swap(int* p1,int* p2)
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}

int main7()
{
	int ma=10;
	int mb=20;
	swap(&ma,&mb);
	cout<<ma<<endl;
	cout<<mb<<endl;

	system("pause");
	return 0;
}