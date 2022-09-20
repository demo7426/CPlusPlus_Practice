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
//	if (mlis01.empty())
//	{
//		cout<<"list容器为空！"<<endl;
//	}
//	else
//	{
//		cout<<"list容器不为空！"<<endl;
//		cout<<"list容器大小： "<<mlis01.size()<<endl;
//	}
//	mlis01.resize(10,1000);
//	PrintList(mlis01);
//	mlis01.resize(2);
//	PrintList(mlis01);
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}