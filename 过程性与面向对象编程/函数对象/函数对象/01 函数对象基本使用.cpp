//#include<iostream>
//using namespace std;
//#include<string>
//
////1������������ʹ�õ�ʱ�򣬿�������ͨ�����������ã������в����������з���ֵ
//class MyAdd
//{
//public:
//	MyAdd(){};
//	~MyAdd(){};
//	int operator()(int ta,int tb)
//	{
//		return ta+tb;
//	}
//
//private:
//
//};
//
////2����������������Լ���״̬
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		m_Number=0;
//	};
//	~MyPrint(){};
//
//	void operator()(string ta)
//	{
//		cout<<ta<<endl;
//		m_Number++;//ͳ�ƴ���
//	}
//	int m_Number;//�ڲ��Լ���״̬
//private:
//
//};
//
//
//void Test01()
//{
//	MyAdd ms01;
//	cout<<ms01(10,20)<<endl;;
//}
//
//void Test02()
//{
//	MyPrint ms02;
//	ms02("�ŷ�");
//	ms02("����");
//	ms02("����");
//	cout<<"MyPrint���ô�����"<<ms02.m_Number<<"��"<<endl;
//}
//
////3���������������Ϊ��������
//void DoPrint(MyPrint &ta,string tb)
//{
//	ta(tb);
//}
//void Test03()
//{
//	MyPrint ms03;
//	DoPrint(ms03,"��ɽ������");
//}
//int main()
//{
//	Test01();	
//	Test02();
//	Test03();
//	system("pause");
//	return 0;
//}