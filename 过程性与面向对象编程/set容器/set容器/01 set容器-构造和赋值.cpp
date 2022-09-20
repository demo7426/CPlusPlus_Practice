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
//	//遍历容器
//	//set容器特点：所有元素插入时自动排序
//	//set容器不允许插入重复值
//	PrintSet(mset01);
//
//	//构造函数赋值
//	set<int>mset02(mset01);
//	PrintSet(mset02);
//
//	//operator=赋值
//	set<int>mset03;
//	mset03=mset01;
//	PrintSet(mset03);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}