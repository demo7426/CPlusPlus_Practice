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
//	//��������
//	//set�����ص㣺����Ԫ�ز���ʱ�Զ�����
//	//set��������������ظ�ֵ
//	PrintSet(mset01);
//
//	//���캯����ֵ
//	set<int>mset02(mset01);
//	PrintSet(mset02);
//
//	//operator=��ֵ
//	set<int>mset03;
//	mset03=mset01;
//	PrintSet(mset03);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}