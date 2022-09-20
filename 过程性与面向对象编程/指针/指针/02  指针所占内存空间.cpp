#include<iostream>
using namespace std;

int main2()
{
	int ma=10;
	int* p=&ma;
	cout<<"int指针所占内存空间大小： "<<sizeof(int*)<<endl;
	cout<<"double指针所占内存空间大小： "<<sizeof(double*)<<endl;
	system("pause");
	return 0;
}
