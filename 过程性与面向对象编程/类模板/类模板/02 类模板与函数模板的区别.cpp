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
//		cout<<"���֣� "<<this->m_name<<" ���䣺 "<<this->m_age<<endl;
//	}
//	~person(){};
//	nametype m_name;
//	agetype m_age;
//private:
//
//};
//
////1����ģ��û���Զ������Ƶ��ķ�ʽ
//void test01()
//{
//	//person ms02("lina",20);//����
//	person <string,int> ms01("����",28);
//	ms01.showperson();
//}
//
////2����ģ���ڲ����б��п�����Ĭ�ϲ���
//void test02()
//{
//	person <string> ms03("����",38);
//	ms03.showperson();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}