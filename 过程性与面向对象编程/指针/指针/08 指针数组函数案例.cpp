#include<iostream>
using namespace std;
#include<string>

void List(int* arr,int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

}

void Printf(int* p,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout<<*(p++)<<endl;
	}
}

int main()
{
	int a[9]={5,3,2,4,1,6,8,9,7};
	int mlength;
	mlength=sizeof(a)/sizeof(a[0]);

	List(a,mlength);
	Printf(a,mlength);
	system("pause");
	return 0;
}