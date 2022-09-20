//#include<iostream>
//using namespace std;
//#include<vector>
//
//
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
//	if (mvec01.empty())
//	{
//		cout<<"vectorÈÝÆ÷Îª¿Õ!"<<endl;
//	}
//	else
//	{
//		cout<<"vectorÈÝÆ÷²»Îª¿Õ!"<<endl;
//		cout<<"ÈÝÆ÷ÈÝÁ¿£º "<<mvec01.capacity()<<endl;
//		cout<<"ÈÝÆ÷´óÐ¡£º "<<mvec01.size()<<endl;
//		mvec01.resize(15,100);
//		MyPrint(mvec01);
//
//		mvec01.resize(5);
//		MyPrint(mvec01);
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}