//#include<iostream>
//using namespace std;
//#include<map>
//
//void PrintMap(map<int,int>tmap01)
//{
//	for (map<int,int>::iterator tp01=tmap01.begin();tp01!=tmap01.end();tp01++)
//	{
//		cout<<"keyֵ= "<<(*tp01).first<<" valueֵ= "<<tp01->second<<endl;
//	}
//	cout<<endl;
//}
//void test01()
//{
//	map<int,int>mmap01;
//
//	//�Զ�����keyֵ����
//	mmap01.insert(pair<int,int>(2,20));
//	mmap01.insert(pair<int,int>(1,10));
//	mmap01.insert(pair<int,int>(3,30));
//	mmap01.insert(pair<int,int>(4,40));
//
//	PrintMap(mmap01);
//
//	if (mmap01.empty())
//	{
//		cout<<"map����Ϊ�գ�"<<endl;
//	}
//	else
//	{
//		cout<<"map������Ϊ�գ�"<<endl;
//		cout<<"map������СΪ�� "<<mmap01.size()<<endl;
//	}
//	cout<<endl;
//}
//
//void test02()
//{
//	map<int,int>mmap01;
//
//	//�Զ�����keyֵ����
//	mmap01.insert(pair<int,int>(2,20));
//	mmap01.insert(pair<int,int>(1,10));
//	mmap01.insert(pair<int,int>(3,30));
//	mmap01.insert(pair<int,int>(4,40));
//
//	map<int,int>mmap02;
//
//	//�Զ�����keyֵ����
//	mmap02.insert(pair<int,int>(5,200));
//	mmap02.insert(pair<int,int>(8,100));
//	mmap02.insert(pair<int,int>(6,300));
//	mmap02.insert(pair<int,int>(7,400));
//	cout<<"����ǰ��"<<endl;
//	PrintMap(mmap01);
//	PrintMap(mmap02);
//
//	mmap01.swap(mmap02);
//	cout<<"������"<<endl;
//	PrintMap(mmap01);
//	PrintMap(mmap02);
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}