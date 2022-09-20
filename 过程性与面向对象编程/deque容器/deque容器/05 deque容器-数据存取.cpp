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
//
////尾插尾删、头插头删
//void test01()
//{
//	deque<int>mdeq01;
//	mdeq01.push_back(10);
//	mdeq01.push_back(20);
//	mdeq01.push_front(100);
//	mdeq01.push_front(200);
//	
//	for (int i = 0; i < mdeq01.size(); i++)
//	{
//		cout<<mdeq01[i]<<" ";
//	}
//	cout<<endl;
//
//	for (int i = 0; i < mdeq01.size(); i++)
//	{
//		cout<<mdeq01.at(i)<<" ";
//	}
//	cout<<endl;
//
//	cout<<"第一个元素： "<<mdeq01.front()<<endl;
//	cout<<"最后一个元素： "<<mdeq01.back()<<endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}