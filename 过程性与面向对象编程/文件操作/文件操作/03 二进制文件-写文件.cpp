//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//class Person
//{
//public:
//	Person(){};
//	~Person(){};
//private:
//
//};
//
//void test01()
//{
//	fstream ms01;
//	ms01.open("text.txt",ios::out|ios::binary);
//	if (ms01.is_open())
//	{
//		Person ms02;
//		char m_Name[64]="张三";
//		int m_Age=18;
//		ms01.write((const char*)&m_Name,sizeof(m_Name));
//		ms01.write((const char*)&m_Age,sizeof(m_Age));
//		ms01.close();
//	}
//	else
//	{
//		cout<<"文件打开失败!"<<endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}