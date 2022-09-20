//#include<iostream>
//using namespace std;
//
////多态实现
////抽象计算器类
////多态的优点：代码组织结构清晰，可读性强，利于前期和后期的扩展和维护
//class AbstractCaculator//基类
//{
//public:
//	AbstractCaculator(){};
//	~AbstractCaculator(){};
//	virtual double Getresult()//虚函数
//	{
//		return 0;
//	}
//	double m_Num01;
//	double m_Num02;
//private:
//
//};
//class AddCaculator:public AbstractCaculator
//{
//public:
//	AddCaculator(){};
//	~AddCaculator(){};
//	virtual double Getresult()
//	{
//		return m_Num01+m_Num02;
//	}
//private:
//
//};
//class SubCaculator:public AbstractCaculator
//{
//public:
//	SubCaculator(){};
//	~SubCaculator(){};
//	virtual double Getresult()
//	{
//		return m_Num01-m_Num02;
//	}
//private:
//
//};
//void test01()
//{
//	AbstractCaculator *pa=new AddCaculator;
//	pa->m_Num01=10;
//	pa->m_Num02=20;
//	cout<<pa->m_Num01<<"+"<<pa->m_Num02<<"="<<pa->Getresult()<<endl;
//	delete pa;
//
//	pa=new SubCaculator;
//	pa->m_Num01=10;
//	pa->m_Num02=20;
//	cout<<pa->m_Num01<<"-"<<pa->m_Num02<<"="<<pa->Getresult()<<endl;
//	delete pa;
//}
//int main ()
//{
//	test01();
//	system("pause");
//	return 0;
//}