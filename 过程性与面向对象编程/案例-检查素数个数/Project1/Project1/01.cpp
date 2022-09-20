#include<iostream>
using namespace std;

int Checksushu(int tNum01)
{
	int mNum02=0;//素数个数
	if (tNum01<=2)
	{
		cout<<"输入错误！！!"<<endl;
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
	int mNum01;//输入数值
	cin>>mNum01;
	Checksushu(mNum01);
	system("pause");
	return 0;
}