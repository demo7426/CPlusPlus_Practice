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
//
//void test01()
//{
//	vector<int> mvec03;
//	int mNum=0;
//	int *mp=NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		mvec03.push_back(i);
//		if (mp!=&mvec03[0])
//		{
//			mp=&mvec03[0];
//			mNum++;
//		}
//	}
//	cout<<"mNum= "<<mNum<<endl;
//	
//}
//
//void test02()
//{
//	vector<int> mvec03;
//	mvec03.reserve(100000);
//	int mNum=0;
//	int *mp=NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		mvec03.push_back(i);
//		if (mp!=&mvec03[0])
//		{
//			mp=&mvec03[0];
//			mNum++;
//		}
//	}
//	cout<<"mNum= "<<mNum<<endl;
//	
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}