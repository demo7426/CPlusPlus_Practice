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
//	bool operator()(int ta)
//	{
//		return ta>3;
//	}
//private:
//
//};
//
//void Test01()
//{
//	vector<int>mvec01;
//	for (int i = 0; i < 10; i++)
//	{
//		mvec01.push_back(i);
//	}
//	vector<int>::iterator mp01=find_if(mvec01.begin(),mvec01.end(),Compare());//Compare()������������
//	if (mp01!=mvec01.end())
//	{
//		cout<<"�ҵ��˴���3������: "<<*mp01<<endl;
//	}
//	else
//	{
//		cout<<"δ�ҵ���"<<endl;
//	}
//}
//int main()
//{
//	Test01();
//	system("pause");
//	return 0;
//}