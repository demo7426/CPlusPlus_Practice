#include<iostream>
using namespace std;
#include<string>

class Person5
{
public:
	Person5();
	~Person5();
	void SetName(string tName)//��������
	{
		m_Name=tName;
	}
	void GetName()//��ȡ����
	{
		cout<<m_Name<<endl;
	}

	void ReadAge()//��ȡ����
	{
		int mAge=18;
		cout<<mAge<<endl;
	}

	void SetStarName(string tName1)//������������
	{
		m_Star=tName1;
	}

private:
	string m_Name;//����  ���˿ڣ��ܹ���д
	int m_Age;//����      ���˿ڣ�ֻ�ܶ�
	string m_Star;//����  ���˿ڣ�ֻ��д
};

Person5::Person5()
{
}

Person5::~Person5()
{
}

int main5()
{
	Person5 ms;
	ms.SetName("����");
	ms.GetName();
	ms.ReadAge();
	ms.SetStarName("�Ʊ�");

	system("pause");
	return 0;
}