//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Compare
//{
//public:
//	Compare(){};
//	~Compare(){};
//
//	bool operator()(int ta,int tb)
//	{
//		return ta>tb;
//	}
//private:
//
//};
//
//void Test01()
//{
//	vector<int>mvec01;
//	mvec01.push_back(10);
//	mvec01.push_back(50);
//	mvec01.push_back(30);
//	mvec01.push_back(40);
//	mvec01.push_back(20);
//	sort(mvec01.begin(),mvec01.end());
//	
//	for (vector<int>::iterator it=mvec01.begin();it!=mvec01.end();it++)
//	{
//		cout<<*it<<" ";
//	}
//	cout<<endl;
//
//	sort(mvec01.begin(),mvec01.end(),Compare());
//	
//	for (vector<int>::iterator it=mvec01.begin();it!=mvec01.end();it++)
//	{
//		cout<<*it<<" ";
//	}
//	cout<<endl;
//}
//int main()
//{
//	Test01();
//	system("pause");
//	return 0;
//}