//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base(){};
//	~Base(){};
//	virtual void func()=0;//����д֮��Base���Ϊ�˳����ࣨ�������޷�ʵ��������
//private:
//
//};
//class Son:public Base
//{
//public:
//	Son(){};
//	~Son(){};
//	virtual void func()
//	{
//		cout <<"����ĵ���"<<endl;
//	}
//private:
//
//};
//
//void test01()
//{
//	//Base ms01;//�������޷�ʵ��������
//	//new Base;//�������޷�ʵ��������
//	Base *mp01=new Son;//����ͨ��ָ��������õ��������Ա
//	mp01->func();
//}
//int main ()
//{
//	test01();
//	system("pause");
//	return 0;
//}