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
//	//�������ݣ�ֻ��insert��ʽ
//	mset01.insert(20);
//	mset01.insert(10);
//	mset01.insert(20);
//	mset01.insert(40);
//	mset01.insert(30);
//
//	PrintSet(mset01);
//	
//	set<int>::iterator mp01=mset01.find(20);
//	if (mp01!=mset01.end())
//	{
//		cout<<"�ҵ�Ԫ�أ� "<<*mp01<<endl;
//	}
//	else
//	{
//		cout<<"δ�ҵ�������"<<endl;
//	}
//
//	cout<<"20���Ԫ�صĸ���: "<<mset01.count(20)<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}