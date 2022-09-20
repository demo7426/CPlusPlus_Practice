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

//尾插尾删、头插头删
void test01()
{
	deque<int>mdeq01;
	mdeq01.push_back(10);
	mdeq01.push_back(20);
	mdeq01.push_front(100);
	mdeq01.push_front(200);
	
	PrintDeque(mdeq01);
	cout<<"\n";
	cout<<"排序后： "<<endl;
	sort(mdeq01.begin(),mdeq01.end());//sort算法默认从大到小排序
	PrintDeque(mdeq01);
}

int main()
{
	test01();
	system("pause");
	return 0;
}