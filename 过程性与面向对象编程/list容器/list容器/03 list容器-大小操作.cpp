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
////��ֵ����
//void test01()
//{
//	list<int> mlis01;
//	mlis01.push_back(10);
//	mlis01.push_back(20);
//	mlis01.push_back(30);
//	mlis01.push_back(40);
//
//	//��������
//	PrintList(mlis01);
//	if (mlis01.empty())
//	{
//		cout<<"list����Ϊ�գ�"<<endl;
//	}
//	else
//	{
//		cout<<"list������Ϊ�գ�"<<endl;
//		cout<<"list������С�� "<<mlis01.size()<<endl;
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