//#include<iostream>
//using namespace std;
//
//class person2
//{
//public:
//	person2();
//	person2(int ta);
//	person2(const person2& tb);
//	~person2();
//
//	int m_Age;
//private:
//
//};
//
////���캯������
////���ղ��������Ϊ�вι�����޲ι���  �޲ι����ֳ�ΪĬ�Ϲ��캯��
////�������ͷ�Ϊ��ͨ����Ϳ�������
//person2::person2()//�޲ι���
//{
//	cout<<"��ͨ���캯���ĵ���"<<endl;
//}
//
//person2::person2(int ta)//�вι���
//{
//	m_Age=ta;
//	cout<<"�вι��캯���ĵ���"<<endl;
//}
//
//person2::person2(const person2& tb)//��������
//{
//	m_Age=tb.m_Age;
//	cout<<m_Age<<endl;
//	cout<<"�������캯���ĵ���"<<endl;
//}
//
//person2::~person2()
//{
//	cout<<"���������ĵ���"<<endl;
//}
//
//void test2()
//{
//	//1�����ŷ�
//	person2 ms1;//ms1�����������ջ�������ú���֮�������ͷ�
//	person2 ms2(10);
//	person2 ms3(ms2);
//
//	//2����ʾ��
//	person2 ms4=person2(5);
//	person2 ms5=person2(ms4);
//	//person(5)����д�����������󣬵�ǰ�н�������������
//
//	//3����ʽת����
//	person2 ms6=6;
//	person2 ms7=ms6;
//
//}
//int main2()
//{
//	test2();
//
//	system("pause");//��ֹ��ms2�������ͷţ��رճ����һ˲��������������
//	return 0;
//}