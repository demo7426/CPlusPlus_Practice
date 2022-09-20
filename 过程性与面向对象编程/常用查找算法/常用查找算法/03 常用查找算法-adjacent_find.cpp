#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<string>

void test01()
{
	vector<int> mvec01;
	mvec01.push_back(0);
	mvec01.push_back(2);
	mvec01.push_back(1);
	mvec01.push_back(0);
	mvec01.push_back(0);
	mvec01.push_back(3);
	mvec01.push_back(0);

	vector<int>::iterator mp01= adjacent_find(mvec01.begin(),mvec01.end());//返回相邻元素中第一个元素的位置
	if (mp01==mvec01.end())
	{
		cout << "未找到相邻的一样的元素！" << endl;
	}
	else
	{
		cout << "找到了相邻的一样的元素: " <<*mp01<< endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}