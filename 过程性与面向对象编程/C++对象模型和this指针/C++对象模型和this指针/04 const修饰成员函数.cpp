#include<iostream>
using namespace std;

//������ֻ�ܵ�������ֵ�ͳ�����
//������ֻ���޸�����ֵ
class Person
{
public:
	Person();
	~Person();
	int m_Age;
	mutable int m_Age02;//�����������ʹ�ڳ�������Ҳ�����޸����ֵ

	//thisָ��ı�����ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//const Person * const this;
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void Show01()
	{
		m_Age=20;
		cout<<"Show01 ��������"<<endl;
	}
	
	void Show02() const//������
	{
		//m_Age=10;//�������	
		m_Age02=12;
	}
private:

};

Person::Person()
{
	
}

Person::~Person()
{
}


void test01()
{
	Person p;
	p.Show01();
	p.Show02();
}

void test02()
{
	const Person p2;//������ֻ�ܵ�������ֵ�ͳ�����
	//p2.m_Age=10;//�������
	p2.m_Age02=20;//m_Age02������ֵ���ڳ�������Ҳ�����޸�
	//p2.Show01();//�������
	p2.Show02();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}