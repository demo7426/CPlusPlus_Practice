//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//void PrintVector(vector<int> tvec)
//{
//	for(vector<int>::iterator tp01=tvec.begin();tp01!=tvec.end();tp01++)
//	{
//		cout<<*tp01<<" ";
//	}
//	cout<<endl;
//}
//void test01()
//{
//	vector<int> mvec01;
//	for (int i = 0; i < 10; i++)
//	{
//		mvec01.push_back(i);
//	}
//	cout<<"交换前："<<endl;
//	PrintVector(mvec01);
//
//	vector<int> mvec02;
//	for (int i = 9; i >= 0; i--)
//	{
//		mvec02.push_back(i);
//	}
//	PrintVector(mvec02);
//
//	mvec01.swap(mvec02);
//	cout<<"交换后："<<endl;
//	PrintVector(mvec01);
//	PrintVector(mvec02);
//	cout<<endl;
//}
//
////实际意义（可以有效利用空间）
//void test02()
//{
//	vector<int> mvec03;
//	for (int i = 0; i < 10000; i++)
//	{
//		mvec03.push_back(i);
//	}
//
//	cout<<"交换前容量： "<<mvec03.capacity()<<endl;
//	cout<<"交换前大小： "<<mvec03.size()<<endl;
//
//	mvec03.resize(3);
//	cout<<"resize后容量： "<<mvec03.capacity()<<endl;
//	cout<<"resize后大小： "<<mvec03.size()<<endl;
//
//	vector<int>(mvec03).swap(mvec03);
//	cout<<"resize后容量： "<<mvec03.capacity()<<endl;
//	cout<<"resize后大小： "<<mvec03.size()<<endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}