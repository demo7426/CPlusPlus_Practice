//#include<iostream>
//using namespace std;
//#include<set>
//
//void PrintSet(const set<int>tset01)
//{
//	for(set<int>::const_iterator tp01=tset01.begin();tp01!=tset01.end();tp01++)
//	{
//		cout<<*tp01<<" ";
//	}
//	cout<<"\n";
//}
//void test01()
//{
//	set<int> mset01;
//
//	//插入数据，只有insert方式
//	mset01.insert(20);
//	mset01.insert(10);
//	mset01.insert(20);
//	mset01.insert(40);
//	mset01.insert(30);
//
//	PrintSet(mset01);
//	
//	mset01.erase(mset01.begin());
//	PrintSet(mset01);
//
//	mset01.erase(20);
//	PrintSet(mset01);
//
//	mset01.clear();//等同于mest01.erase(mset01.begin(),mset01.end());
//	PrintSet(mset01);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}