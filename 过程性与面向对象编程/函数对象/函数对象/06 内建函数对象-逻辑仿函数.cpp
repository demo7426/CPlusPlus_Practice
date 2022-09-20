#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

void Test01()
{
	vector<bool>mvec01;
	mvec01.push_back(true);
	mvec01.push_back(false);
	mvec01.push_back(false);
	mvec01.push_back(true);
	mvec01.push_back(true);
	for (vector<bool>::iterator it=mvec01.begin();it!=mvec01.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	vector<bool>mvec02;
	mvec02.resize(mvec01.size());

	transform(mvec01.begin(),mvec01.end(),mvec02.begin(),logical_not<bool>());
	for (vector<bool>::iterator it=mvec02.begin();it!=mvec02.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
int main()
{
	Test01();
	system("pause");
	return 0;
}