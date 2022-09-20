//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>//标准算法头文件
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
//	Person ms01("张三",18);
//	Person ms02("李四",28);
//	Person ms03("王五",38);
//	Person ms04("孙权",48);
//
//	vecvalue.push_back(ms01);
//	vecvalue.push_back(ms02);
//	vecvalue.push_back(ms03);
//	vecvalue.push_back(ms04);
//
//	for (vector<Person>::iterator tp01=vecvalue.begin();tp01!=vecvalue.end();tp01++)
//	{
//		cout<<"名字："<<(*tp01).m_Name<<" 年龄："<<(*tp01).m_Age<<endl;//两种方式，对象调用
//		//cout<<"名字："<<tp01->m_Name<<" 年龄："<<tp01->m_Age<<endl;//两种方式，指针调用
//	}
//}
//
//void test02()
//{
//	vector<Person*> vecvalue;
//	Person ms01("张三",18);
//	Person ms02("李四",28);
//	Person ms03("王五",38);
//	Person ms04("孙权",48);
//
//	vecvalue.push_back(&ms01);
//	vecvalue.push_back(&ms02);
//	vecvalue.push_back(&ms03);
//	vecvalue.push_back(&ms04);
//
//	for (vector<Person*>::iterator tp01=vecvalue.begin();tp01!=vecvalue.end();tp01++)
//	{
//		cout<<"名字："<<(*tp01)->m_Name<<" 年龄："<<(*tp01)->m_Age<<endl;//两种方式，指针调用
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