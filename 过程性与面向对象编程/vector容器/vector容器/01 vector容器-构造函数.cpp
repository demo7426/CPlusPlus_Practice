//#include<iostream>
//using namespace std;
//#include<vector>
//
////vector的多种构造方式没有可比性，灵活应用即可
//void MyPrint(vector<int> &tmvec)
//{
//	for (vector<int>::iterator tp=tmvec.begin();tp!=tmvec.end();tp++)
//	{
//		cout<<*tp<<" ";
//	}
//	cout<<"\n";
//}
//void test01()
//{
//	vector<int> mvec01;
//	for (int i = 0; i < 10; i++)
//	{
//		mvec01.push_back(i);
//	}
//	MyPrint(mvec01);
//
//	vector<int> mvec02(mvec01.begin(),mvec01.end());
//	MyPrint(mvec02);
//
//	vector<int> mvec03(10,100);
//	MyPrint(mvec03);
//
//	vector<int> mvec04(mvec02);
//	MyPrint(mvec04);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}