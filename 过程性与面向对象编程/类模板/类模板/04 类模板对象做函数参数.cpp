//#include<iostream>
//using namespace std;
//#include<string>
//
//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType tName,AgeType tAge)
//	{
//		this->m_Name=tName;
//		this->m_Age=tAge;
//	}
//	~Person(){};//����дĬ����������
//	NameType m_Name;
//	AgeType m_Age;
//private:
//
//};
//
////1��ָ����������(�õ�����)
//void ShowPerson01(Person <string,int> &tp)
//{
//	cout<<tp.m_Name<<" "<<tp.m_Age<<endl;
//}
//void test01()
//{
//	Person <string,int> ms01("����",28);
//	ShowPerson01(ms01);
//}
//
////2������ģ�廯
//template<class T1,class T2>
//void ShowPerson02(Person <T1,T2> &tp)
//{
//	cout<<tp.m_Name<<" "<<tp.m_Age<<endl;
//	cout<<typeid(T1).name()<<endl;
//	cout<<typeid(T2).name()<<endl;
//}
//void test02()
//{
//	Person <string,int> ms02("����",38);
//	ShowPerson02(ms02);
//}
//
////3��������ģ�廯
//template<class T>
//void ShowPerson03(T &tp)
//{
//	cout<<tp.m_Name<<" "<<tp.m_Age<<endl;
//	cout<<typeid(T).name()<<endl;
//}
//void test03()
//{
//	Person <string,int> ms03("����",48);
//	ShowPerson03(ms03);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}