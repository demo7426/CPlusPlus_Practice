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
//	mmap01.insert(pair<int,int>(3,80));
//
//	PrintMap(mmap01);
//
//	map<int,int>::iterator mpos=mmap01.find(2);
//	if (mpos!=mmap01.end())
//	{
//		cout<<"�ҵ��ˣ�"<<" keyֵ�� "<<mpos->first<<" valueֵ�� "<<mpos->second<<endl;
//	}
//	else
//	{
//		cout<<"δ�ҵ���"<<endl;
//	}
//	cout<<"keyֵΪ3�ĸ�����"<<mmap01.count(3)<<"��"<<endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}