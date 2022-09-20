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
//	set<int> mset02;
//
//	//插入数据，只有insert方式
//	mset02.insert(200);
//	mset02.insert(100);
//	mset02.insert(200);
//	//遍历容器
//	//set容器特点：所有元素插入时自动排序
//	//set容器不允许插入重复值
//	cout<<"交换前： "<<endl;
//	PrintSet(mset01);
//	PrintSet(mset02);
//
//	if (mset01.empty())
//	{
//		cout<<"第一个set容器为空！"<<endl;
//	}
//	else
//	{
//		cout<<"第一个set容器不为空！"<<endl;
//
//	}
//	cout<<"第一个set容器大小： "<<mset01.size()<<endl;
//
//	cout<<"交换后： "<<endl;
//	mset01.swap(mset02);
//	PrintSet(mset01);
//	PrintSet(mset02);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}