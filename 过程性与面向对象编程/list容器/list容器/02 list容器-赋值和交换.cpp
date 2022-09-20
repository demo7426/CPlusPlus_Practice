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
//
////赋值操作
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
//	list<int>mlis02;
//	mlis02=mlis01;
//	PrintList(mlis02);
//
//	list<int>mlis03;
//	mlis03.assign(mlis01.begin(),--mlis01.end());
//	PrintList(mlis03);
//
//	list<int>mlis04;
//	mlis04.assign(10,100);
//	PrintList(mlis04);
//	cout<<endl;
//}
//
////交换
//void test02()
//{
//	list<int> mlis01;
//	mlis01.push_back(10);
//	mlis01.push_back(20);
//	mlis01.push_back(30);
//	mlis01.push_back(40);
//
//	list<int>mlis02;
//	mlis02.assign(10,100);
//	cout<<"交换前："<<endl;
//	PrintList(mlis01);
//	PrintList(mlis02);
//
//	mlis01.swap(mlis02);
//	cout<<"交换后："<<endl;
//	PrintList(mlis01);
//	PrintList(mlis02);
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}