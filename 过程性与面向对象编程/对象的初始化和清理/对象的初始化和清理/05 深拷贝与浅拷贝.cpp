#include<iostream>
using namespace std;

//ǳ��������ջ��ִ��
//������ڶ���ִ��
class person
{
public:
	person();
	person(int ta);
	person(const person& tb);
	~person();

	int m_Age;
	int* m_Height;
private:

};

person::person()//�޲ι���
{
	cout<<"��ͨ���캯���ĵ���"<<endl;
}

person::person(int ta)//�вι���
{
	m_Age=ta;
	m_Height=new int(ta);
	cout<<"�вι��캯���ĵ���"<<*m_Height<<endl;
}

person::person(const person& tb)//��������
{
	m_Age=tb.m_Age;
	//m_Height=tb.m_Height;//ǳ����
	m_Height=new int(*tb.m_Height);//������ڶ�������λ�ô������

	cout<<"�������캯���ĵ���"<<*m_Height<<endl;
}

person::~person()
{
	if (m_Height!=NULL)//ɾ�����ο��ٵĶ�����ַ
	{
		delete m_Height;
		m_Height=NULL;
	}
	cout<<"���������ĵ���"<<endl;
}

void test05()
{
	person p7;
	person p5(10);
	person p6(p5);
}

int main()
{
	test05();
	system("pause");//��ֹ��ms2�������ͷţ��رճ����һ˲��������������
	return 0;
}