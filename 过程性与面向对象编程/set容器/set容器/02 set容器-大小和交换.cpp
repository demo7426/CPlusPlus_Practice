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
//	set<int> mset02;
//
//	//�������ݣ�ֻ��insert��ʽ
//	mset02.insert(200);
//	mset02.insert(100);
//	mset02.insert(200);
//	//��������
//	//set�����ص㣺����Ԫ�ز���ʱ�Զ�����
//	//set��������������ظ�ֵ
//	cout<<"����ǰ�� "<<endl;
//	PrintSet(mset01);
//	PrintSet(mset02);
//
//	if (mset01.empty())
//	{
//		cout<<"��һ��set����Ϊ�գ�"<<endl;
//	}
//	else
//	{
//		cout<<"��һ��set������Ϊ�գ�"<<endl;
//
//	}
//	cout<<"��һ��set������С�� "<<mset01.size()<<endl;
//
//	cout<<"������ "<<endl;
//	mset01.swap(mset02);
//	PrintSet(mset01);
//	PrintSet(mset02);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}