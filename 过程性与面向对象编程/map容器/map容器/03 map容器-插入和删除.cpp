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
//	//��һ�ֲ��뷽ʽ
//	mmap01.insert(pair<int,int>(1,10));
//	
//	//�ڶ��ֲ��뷽ʽ
//	mmap01.insert(make_pair(2,20));
//
//	//�����ֲ��뷽ʽ
//	mmap01.insert(map<int,int>::value_type(3,30));
//
//	//�����ֲ��뷽ʽ
//	mmap01[4]=40;
//	PrintMap(mmap01);
//
//	mmap01.erase(mmap01.begin());
//	PrintMap(mmap01);
//
//	mmap01.erase(3);
//	PrintMap(mmap01);
//
//	mmap01.erase(mmap01.begin(),mmap01.end());
//	//mmap01.clear();
//	PrintMap(mmap01);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}