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
//
//	pair<set<int>::iterator,bool> mret= mset01.insert(10);
//	if (mret.second)
//	{
//		cout<<"��һ�β���ɹ���"<<endl;
//	}
//	else
//	{
//		cout<<"��һ�β���ʧ�ܣ�"<<endl;
//	}
//	
//	mret= mset01.insert(10);
//	if (mret.second)
//	{
//		cout<<"�ڶ��β���ɹ���"<<endl;
//	}
//	else
//	{
//		cout<<"�ڶ��β���ʧ�ܣ�"<<endl;
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