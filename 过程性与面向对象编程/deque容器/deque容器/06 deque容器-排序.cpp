#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

void PrintDeque(const deque<int>tdeq01)
{
	for(deque<int>::const_iterator tp=tdeq01.begin();tp!=tdeq01.end();tp++)
	{
		cout<<*tp<<" ";
	}
	cout<<endl;
}

//β��βɾ��ͷ��ͷɾ
void test01()
{
	deque<int>mdeq01;
	mdeq01.push_back(10);
	mdeq01.push_back(20);
	mdeq01.push_front(100);
	mdeq01.push_front(200);
	
	PrintDeque(mdeq01);
	cout<<"\n";
	cout<<"����� "<<endl;
	sort(mdeq01.begin(),mdeq01.end());//sort�㷨Ĭ�ϴӴ�С����
	PrintDeque(mdeq01);
}

int main()
{
	test01();
	system("pause");
	return 0;
}