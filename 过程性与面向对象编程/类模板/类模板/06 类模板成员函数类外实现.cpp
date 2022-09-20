//#include<iostream>
//using namespace std;
//#include<string>
//
//template<class nametype,class agetype>
//class person
//{
//public:
//	person(nametype tname,agetype tage);
//
//	void showperson();
//	~person(){};
//	nametype m_name;
//	agetype m_age;
//private:
//
//};
//template<class nametype,class agetype>
//person<nametype,agetype>::person(nametype tname,agetype tage)
//{
//	this->m_name=tname;
//	this->m_age=tage;
//}
//template<class nametype,class agetype>
//void person<nametype,agetype>::showperson()
//{
//	cout<<"名字： "<<this->m_name<<" 年龄： "<<this->m_age<<endl;
//}
////1、类模板没有自动类型推到的方式
//void test01()
//{
//	//person ms02("lina",20);//错误
//	person <string,int> ms01("张三",28);
//	ms01.showperson();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}