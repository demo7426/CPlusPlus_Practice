#include<iostream>
using namespace std;

class C1
{
	int m_a;//�������ԱĬ��Ϊ˽��Ȩ��
public:
	C1();
	~C1();

};

C1::C1()
{
}

C1::~C1()
{
}

typedef struct _C3
{
	int m_b;//�ṹ���ԱĬ��Ȩ��Ϊ����Ȩ��
}C3,*pC3;

int main4()
{
	C1 ms1;
	//ms1.m_a=100;//���������޷�����
	C3 ms3;
	ms3.m_b=100;//����Ȩ�޿��Է���
	cout<<ms3.m_b<<endl;
	system("pause");
	return 0;
}