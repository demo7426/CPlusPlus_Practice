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

	vector<int>::iterator mp01= adjacent_find(mvec01.begin(),mvec01.end());//��������Ԫ���е�һ��Ԫ�ص�λ��
	if (mp01==mvec01.end())
	{
		cout << "δ�ҵ����ڵ�һ����Ԫ�أ�" << endl;
	}
	else
	{
		cout << "�ҵ������ڵ�һ����Ԫ��: " <<*mp01<< endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}