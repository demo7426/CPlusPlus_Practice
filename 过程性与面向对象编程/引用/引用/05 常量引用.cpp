#include<iostream>
using namespace std;

int Show(const int& a)
{
	//a=10;//const�������ã������޸�
	cout<<a<<endl;
	return 0;
}

int main()
{
	int ma=100;
	Show(ma);

	//int &mb=20;//����
	const int& mb=20;//����const�󣬱������Ż��˴��룬int temp=10;const int& mb=temp;
	cout<<mb<<endl;

	int mc=5;
	int md=15;
	const int *mp1=&mc;
	mp1=&md;
	cout<<*mp1<<endl;
	system("pause");
	return 0;
}