#include<iostream>
using namespace std;
#include<string>

int main6()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int* p=arr;
	for (int i = 0; i < 10; i++)
	{
		cout<<*p;
		p++;
	}
	cout<<"\n";


	system("pause");
	return 0;
}