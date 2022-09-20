//#include<iostream>
//using namespace std;
//#include<list>
//
//void PrintList(list<int> tlis01)
//{
//	for(list<int>::iterator tp01=tlis01.begin();tp01!=tlis01.end();tp01++)
//	{
//		cout<<*tp01<<" ";
//	}
//	cout<<endl;
//}
//void test01()
//{
//	list<int> mlis01;
//	mlis01.push_back(10);
//	mlis01.push_back(20);
//	mlis01.push_back(30);
//	mlis01.push_back(40);
//
//	//遍历容器
//	PrintList(mlis01);
//
//	//区间构造
//	list<int>mlis02(mlis01.begin(),--mlis01.end());
//	PrintList(mlis02);
//
//	//拷贝构造
//	list<int>mlis03(mlis02);
//	PrintList(mlis03);
//
//	//n个elem
//	list<int>mlis04(10,9);
//	PrintList(mlis04);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}