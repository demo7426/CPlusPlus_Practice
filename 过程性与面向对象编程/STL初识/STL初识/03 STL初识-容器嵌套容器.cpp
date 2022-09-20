#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//标准算法头文件
#include<string>

void test01()
{
	vector<vector<int>> vecvalue;
	
	//创建小容器
	vector<int>v01;
	vector<int>v02;
	vector<int>v03;
	vector<int>v04;
	for (int i = 0; i < 4; i++)
	{
		v01.push_back(i);
		v02.push_back(i+1);
		v03.push_back(i+2);
		v04.push_back(i+3);
	}
	vecvalue.push_back(v01);
	vecvalue.push_back(v02);
	vecvalue.push_back(v03);
	vecvalue.push_back(v04);

	for(vector<vector<int>>::iterator tp01=vecvalue.begin();tp01!=vecvalue.end();tp01++)
	{
		//*tp01---等同于vector<int>
		for(vector<int>::iterator tp02=(*tp01).begin();tp02!=(*tp01).end();tp02++)
		{
			cout<<*tp02<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}