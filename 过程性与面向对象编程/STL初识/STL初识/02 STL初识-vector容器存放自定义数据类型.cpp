//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>//��׼�㷨ͷ�ļ�
//#include<string>
//
//class Person
//{
//public:
//	Person(string tName,int tAge)
//	{
//		this->m_Name=tName;
//		this->m_Age=tAge;
//	};
//	~Person(){};
//
//	string m_Name;
//	int m_Age;
//private:
//
//};
//
//void test01()
//{
//	vector<Person> vecvalue;
//	Person ms01("����",18);
//	Person ms02("����",28);
//	Person ms03("����",38);
//	Person ms04("��Ȩ",48);
//
//	vecvalue.push_back(ms01);
//	vecvalue.push_back(ms02);
//	vecvalue.push_back(ms03);
//	vecvalue.push_back(ms04);
//
//	for (vector<Person>::iterator tp01=vecvalue.begin();tp01!=vecvalue.end();tp01++)
//	{
//		cout<<"���֣�"<<(*tp01).m_Name<<" ���䣺"<<(*tp01).m_Age<<endl;//���ַ�ʽ���������
//		//cout<<"���֣�"<<tp01->m_Name<<" ���䣺"<<tp01->m_Age<<endl;//���ַ�ʽ��ָ�����
//	}
//}
//
//void test02()
//{
//	vector<Person*> vecvalue;
//	Person ms01("����",18);
//	Person ms02("����",28);
//	Person ms03("����",38);
//	Person ms04("��Ȩ",48);
//
//	vecvalue.push_back(&ms01);
//	vecvalue.push_back(&ms02);
//	vecvalue.push_back(&ms03);
//	vecvalue.push_back(&ms04);
//
//	for (vector<Person*>::iterator tp01=vecvalue.begin();tp01!=vecvalue.end();tp01++)
//	{
//		cout<<"���֣�"<<(*tp01)->m_Name<<" ���䣺"<<(*tp01)->m_Age<<endl;//���ַ�ʽ��ָ�����
//	}
//}
//int main()
//{
//	test01();
//	cout<<"\n";
//	test02();
//	system("pause");
//	return 0;
//}