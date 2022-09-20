//#include<iostream>
//using namespace std;
//#include<string>
//
//template<class nametype,class agetype=int >
//class person
//{
//public:
//	person(nametype tname,agetype tage)
//	{
//		this->m_name=tname;
//		this->m_age=tage;
//	}
//	void showperson()
//	{
//		cout<<"名字： "<<this->m_name<<" 年龄： "<<this->m_age<<endl;
//	}
//	~person(){};
//	nametype m_name;
//	agetype m_age;
//private:
//
//};
//
////1、类模板没有自动类型推到的方式
//void test01()
//{
//	//person ms02("lina",20);//错误
//	person <string,int> ms01("张三",28);
//	ms01.showperson();
//}
//
////2、类模板在参数列表中可以有默认参数
//void test02()
//{
//	person <string> ms03("李四",38);
//	ms03.showperson();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}