//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//	person();
//	person(int ta);
//	person(const person& tb);
//	~person();
//
//	int m_Age;
//private:
//
//};
//
////���캯������
////���ղ��������Ϊ�вι�����޲ι���  �޲ι����ֳ�ΪĬ�Ϲ��캯��
////�������ͷ�Ϊ��ͨ����Ϳ�������
//person::person()//�޲ι���
//{
//	cout<<"��ͨ���캯���ĵ���"<<endl;
//}
//
//person::person(int ta)//�вι���
//{
//	m_Age=ta;
//	cout<<"�вι��캯���ĵ���"<<endl;
//}
//
//person::person(const person& tb)//��������
//{
//	m_Age=tb.m_Age;
//	cout<<"�������캯���ĵ���"<<endl;
//}
//
//person::~person()
//{
//	cout<<"���������ĵ���"<<endl;
//}
//
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test03()
//{
//	person ms2(10);
//	person ms3(ms2);
//	cout<<ms2.m_Age<<endl;
//}
//
////2��ֵ���ݵķ�ʽ������������ֵ
//void DoWork(person tp)
//{
//
//}
//void test04()
//{
//	person ms5;
//	DoWork(ms5);
//}
//
////3��ֵ��ʽ���ؾֲ�����
//person DoWork05()
//{
//	person p5;
//	return p5;
//}
//void test05()
//{
//	person ms6= DoWork05();
//}
//int main()
//{
//	/*test03();
//	test04();*/
//	test05();
//	system("pause");//��ֹ��ms2�������ͷţ��رճ����һ˲��������������
//	return 0;
//}