//#include<iostream>
//using namespace std;
//#include<vector>
//
////vector的赋值可以用operator=,或者assign都可以
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
//	vector<int> mvec02;
//	mvec02=mvec01;
//	MyPrint(mvec02);
//
//	vector<int> mvec03;
//	mvec03.assign(mvec02.begin(),mvec02.end());
//	MyPrint(mvec03);
//
//	vector<int> mvec04;
//	mvec04.assign(10,100);
//	MyPrint(mvec04);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}