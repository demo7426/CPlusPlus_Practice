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
//	if (mdeq01.empty())
//	{
//		cout<<"deque容器为空！"<<endl;
//	}
//	else
//	{
//		cout<<"deque容器不为空！"<<endl;
//		cout<<"deque容器大小为： "<<mdeq01.size()<<endl;
//	}
//
//	mdeq01.resize(15);
//	PrintDeque(mdeq01);
//
//	mdeq01.resize(20,100);
//	PrintDeque(mdeq01);
//
//	mdeq01.resize(5);
//	PrintDeque(mdeq01);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}