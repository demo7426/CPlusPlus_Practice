#include<iostream>
using namespace std;

//����Ȩ�� public     ��Ա ���ڿ��Է��� ������Է���
//����Ȩ�� protected  ��Ա ���ڿ��Է��� ���ⲻ���Է��� ������Է��ʸ���
//˽��Ȩ�� private    ��Ա ���ڿ��Է��� ���ⲻ���Է��� ���಻���Է��ʸ���

class Person
{
public:
	Person();
	~Person();
	string m_Name;//����
protected:
	string m_Car;//����
private:
	int m_IdPassword;//���п�����
public:
	void change()
	{
		m_Name="����";
		m_Car="�׿���˹";
		m_IdPassword=666888;
	}
};

Person::Person()
{
}

Person::~Person()
{
}

int main()
{
	Person ms;
	ms.m_Name="����";
	//ms.m_Car="����";//�����޷�����protected��Ա
	//ms.m_IdPassword=666666;//�����޷�����public��Ա
	ms.change();
	cout << (&ms)->m_Name << endl;
	system("pause");
	return 0;
}