//#include<iostream>
//using namespace std;
//#include<deque>
//
//void PrintDeque(const deque<int>tdeq01)
//{
//	for(deque<int>::const_iterator tp=tdeq01.begin();tp!=tdeq01.end();tp++)
//	{
//		cout<<*tp<<" ";
//	}
//	cout<<endl;
//}
//void test01()
//{
//	deque<int>mdeq01;
//	for (int i = 0; i < 10; i++)
//	{
//		mdeq01.push_back(i);
//	}
//	PrintDeque(mdeq01);
//
//	deque<int>mdeq02=mdeq01;
//	PrintDeque(mdeq02);
//
//	deque<int>mdeq03;
//	mdeq03.assign(10,100);
//	PrintDeque(mdeq03);
//
//	deque<int>mdeq04;
//	mdeq04.assign(mdeq03.begin(),mdeq03.end());
//	PrintDeque(mdeq04);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}