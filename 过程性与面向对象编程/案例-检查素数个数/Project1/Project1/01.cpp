#include<iostream>
using namespace std;

int Checksushu(int tNum01)
{
	int mNum02=0;//��������
	if (tNum01<=2)
	{
		cout<<"������󣡣�!"<<endl;
	}
	else
	{
		for (int i = 3; i <= tNum01; i++)
		{
			for (int j = 2; j < i; j++)
			{
				if (i%j==0)
				{
					mNum02++;
					break;
				}
			}
		}
	cout<<tNum01-mNum02<<endl;
	}
	return tNum01-mNum02;

}
int main()
{
	int mNum01;//������ֵ
	cin>>mNum01;
	Checksushu(mNum01);
	system("pause");
	return 0;
}