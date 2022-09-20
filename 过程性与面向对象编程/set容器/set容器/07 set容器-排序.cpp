//#include<iostream>
//using namespace std;
//#include<set>
//
//class Compare
//{
//public:
//	Compare(){};
//	~Compare(){};
//	bool operator()(int ta,int tb)//重载operator()
//	{
//		return ta>tb;
//	}
//private:
//
//};
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
//	//默认升序
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
//	//降序
//	set<int,Compare> mset02;
//
//	//插入数据，只有insert方式
//	mset02.insert(20);
//	mset02.insert(10);
//	mset02.insert(20);
//	mset02.insert(40);
//	mset02.insert(30);
//
//
//	for(set<int,Compare>::iterator tp02=mset02.begin();tp02!=mset02.end();tp02++)
//	{
//		cout<<*tp02<<" "; 
//	}
//	cout<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}