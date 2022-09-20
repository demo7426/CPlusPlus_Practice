//#include<iostream>
//using namespace std;
//#include<map>
//
//void PrintMap(map<int,int>tmap01)
//{
//	for (map<int,int>::iterator tp01=tmap01.begin();tp01!=tmap01.end();tp01++)
//	{
//		cout<<"key值= "<<(*tp01).first<<" value值= "<<tp01->second<<endl;
//	}
//	cout<<endl;
//}
//void test01()
//{
//	map<int,int>mmap01;
//
//	//自动按照key值排序
//	mmap01.insert(pair<int,int>(2,20));
//	mmap01.insert(pair<int,int>(1,10));
//	mmap01.insert(pair<int,int>(3,30));
//	mmap01.insert(pair<int,int>(4,40));
//	mmap01.insert(pair<int,int>(3,80));
//
//	PrintMap(mmap01);
//
//	map<int,int>::iterator mpos=mmap01.find(2);
//	if (mpos!=mmap01.end())
//	{
//		cout<<"找到了！"<<" key值： "<<mpos->first<<" value值： "<<mpos->second<<endl;
//	}
//	else
//	{
//		cout<<"未找到！"<<endl;
//	}
//	cout<<"key值为3的个数："<<mmap01.count(3)<<"个"<<endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}