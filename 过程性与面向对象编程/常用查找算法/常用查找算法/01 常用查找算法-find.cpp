//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Person01
//{
//public:
//	Person01(string t_Name,int t_Age) 
//	{
//		this->m_Name = t_Name;
//		this->m_Age = t_Age;
//	};
//	~Person01() {};
//	bool operator==(const Person01 &ts01)
//	{
//		if (this->m_Name == ts01.m_Name && this->m_Age == ts01.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//
//private:
//
//};
//
//void test01()
//{
//	vector<int>mvec01;
//	for (int i = 0; i < 10; i++)
//	{
//		mvec01.push_back(i);
//	}
//
//	vector<int>::iterator mp01=find(mvec01.begin(),mvec01.end(),6);
//	if (mp01==mvec01.end())
//	{
//		cout << "δ�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ� " << *mp01 << endl;
//	}
//}
//
//void test02()
//{
//	Person01 ms01("�ŷ�", 28);
//	Person01 ms02("����", 18);
//	Person01 ms03("��ά", 38);
//	Person01 ms04("����", 58);
//	vector<Person01>mvec01;
//	mvec01.push_back(ms01);
//	mvec01.push_back(ms02);
//	mvec01.push_back(ms03);
//	mvec01.push_back(ms04);
//
//	Person01 ms05("��ά", 38);
//
//	vector<Person01>::iterator mp01 = find(mvec01.begin(), mvec01.end(), ms05);
//	if (mp01 == mvec01.end())
//	{
//		cout << "δ�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ� " << "����: " << mp01->m_Name << " ����: " << mp01->m_Age << endl;
//	}
//}
//int main()
//{
//	/*test01();*/
//	test02();
//
//	system("pause");
//	return 0;
//}