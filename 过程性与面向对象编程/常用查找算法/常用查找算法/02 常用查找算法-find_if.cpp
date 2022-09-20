//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Person01
//{
//public:
//	Person01(string t_Name, int t_Age)
//	{
//		this->m_Name = t_Name;
//		this->m_Age = t_Age;
//	};
//	~Person01() {};
//	
//	string m_Name;
//	int m_Age;
//
//private:
//
//};
//class MyCompare01
//{
//public:
//	MyCompare01() {};
//	~MyCompare01() {};
//	bool operator()(int ta)
//	{
//		return ta > 5;
//	}
//private:
//
//};
//
//class MyCompare02
//{
//public:
//	MyCompare02() {};
//	~MyCompare02() {};
//	bool operator()(const Person01& ts01)
//	{
//		return ts01.m_Age > 20;
//	}
//private:
//
//};
//
//
////1、查找内置数据类型
//void test01()
//{
//	vector<int>mvec01;
//	for (int i = 0; i < 10; i++)
//	{
//		mvec01.push_back(i);
//	}
//
//	vector<int>::iterator mp01 = find_if(mvec01.begin(),mvec01.end(), MyCompare01());
//	if (mp01 == mvec01.end())
//	{
//		cout << "未找到！" << endl;
//	}
//	else
//	{
//		cout << "找到了： " << *mp01 << endl;
//	}
//}
//
////2、查找自定义数据类型
//void test02()
//{
//	Person01 ms01("张飞", 18);
//	Person01 ms02("赵云", 18);
//	Person01 ms03("姜维", 38);
//	Person01 ms04("黄忠", 58);
//	vector<Person01>mvec01;
//	mvec01.push_back(ms01);
//	mvec01.push_back(ms02);
//	mvec01.push_back(ms03);
//	mvec01.push_back(ms04);
//
//	Person01 ms05("姜维", 38);
//
//	vector<Person01>::iterator mp01 = find_if(mvec01.begin(), mvec01.end(), MyCompare02());
//	if (mp01 == mvec01.end())
//	{
//		cout << "未找到！" << endl;
//	}
//	else
//	{
//		cout << "找到了： " << "姓名: " << mp01->m_Name << " 年龄: " << mp01->m_Age << endl;
//	}
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}