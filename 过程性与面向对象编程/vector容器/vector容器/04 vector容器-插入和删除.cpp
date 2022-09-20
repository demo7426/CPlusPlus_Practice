#include<iostream>
using namespace std;
#include<vector>


void MyPrint(vector<int> &tmvec)
{
	for (vector<int>::iterator tp=tmvec.begin();tp!=tmvec.end();tp++)
	{
		cout<<*tp<<" ";
	}
	cout<<"\n";
}
void test01()
{
	vector<int> mvec01;
	for (int i = 0; i < 10; i++)
	{
		mvec01.push_back(i);
	}
	MyPrint(mvec01);

	mvec01.pop_back();
	MyPrint(mvec01);

	mvec01.insert(++mvec01.begin(),100);//����
	MyPrint(mvec01);

	mvec01.erase(mvec01.begin());//����
	MyPrint(mvec01);

	mvec01.erase(mvec01.begin(),mvec01.end()-3);//����һ��
	MyPrint(mvec01);

	mvec01.clear();//���vector����
	MyPrint(mvec01);
}
int main()
{
	test01();
	system("pause");
	return 0;
}