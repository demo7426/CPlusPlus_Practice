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
////Î²²åÎ²É¾¡¢Í·²åÍ·É¾
//void test01()
//{
//	deque<int>mdeq01;
//	mdeq01.push_back(10);
//	mdeq01.push_back(20);
//	mdeq01.push_front(100);
//	mdeq01.push_front(200);
//	PrintDeque(mdeq01);
//
//	mdeq01.pop_back();
//	PrintDeque(mdeq01);
//	mdeq01.pop_front();
//	PrintDeque(mdeq01);
//
//	cout<<endl;
//}
//
//void test02()
//{
//	deque<int>mdeq02;
//	mdeq02.push_back(10);
//	mdeq02.push_back(20);
//	mdeq02.push_back(30);
//	PrintDeque(mdeq02);
//
//	mdeq02.insert(mdeq02.begin(),1000);
//	PrintDeque(mdeq02);
//
//	mdeq02.insert(mdeq02.begin(),2,2000);
//	PrintDeque(mdeq02);
//
//	deque<int>mdeq03;
//	mdeq03.push_back(1);
//	mdeq03.push_back(2);
//	mdeq03.push_back(3);
//	PrintDeque(mdeq03);
//
//	mdeq02.insert(++mdeq02.begin(),mdeq03.begin(),mdeq03.end());
//	PrintDeque(mdeq02);
//	
//	cout<<endl;
//}
//
//void test03()
//{
//	deque<int>mdeq04;
//	mdeq04.push_back(10);
//	mdeq04.push_back(20);
//	mdeq04.push_back(30);
//	mdeq04.push_back(40);
//	mdeq04.push_back(50);
//	mdeq04.push_back(60);
//	PrintDeque(mdeq04);
//
//	mdeq04.erase(mdeq04.begin());
//	PrintDeque(mdeq04);
//
//	mdeq04.erase(mdeq04.begin(),mdeq04.end()-3);
//	PrintDeque(mdeq04);
//
//	mdeq04.clear();
//	PrintDeque(mdeq04);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}