//#include<iostream>
//using namespace std;
//
////Ĭ������£�C++����Ĭ�ϸ��ഴ����������
////�ֱ�Ϊ�޲ι��캯�������������Ϳ������캯��
//
////���캯�����ù������£�
////1������û��Լ��������вι��캯���������ṩ�޲ι��캯����������Ȼ�ṩĬ�Ͽ������캯��
////2������û��Լ������˿������캯���������ṩ�������캯��
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
//	//test05();
//	system("pause");//��ֹ��ms2�������ͷţ��رճ����һ˲��������������
//	return 0;
//}