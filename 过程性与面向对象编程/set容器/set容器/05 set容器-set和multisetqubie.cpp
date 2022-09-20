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
//
//	pair<set<int>::iterator,bool> mret= mset01.insert(10);
//	if (mret.second)
//	{
//		cout<<"第一次插入成功！"<<endl;
//	}
//	else
//	{
//		cout<<"第一次插入失败！"<<endl;
//	}
//	
//	mret= mset01.insert(10);
//	if (mret.second)
//	{
//		cout<<"第二次插入成功！"<<endl;
//	}
//	else
//	{
//		cout<<"第二次插入失败！"<<endl;
//	}
//
//	multiset<int> mmult01;
//	mmult01.insert(10);
//	mmult01.insert(20);
//	mmult01.insert(10);
//
//	for (multiset<int>::iterator tp02=mmult01.begin();tp02!=mmult01.end();tp02++)
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