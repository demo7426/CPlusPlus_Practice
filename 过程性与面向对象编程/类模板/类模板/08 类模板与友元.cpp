#include<iostream>
using namespace std;
#include<string>

//��ǰ�ñ�����֪��Person�Ĵ���
template<class NameType,class AgeType>
class Person;

//ȫ�ֺ��� ����ʵ��
template<class NameType,class AgeType>
void ShowPerson02(Person<NameType,AgeType> ts02)
{
	cout<<"����ʵ��---"<<"������ "<<ts02.m_Name<<"���䣺 "<<ts02.m_Age<<endl;
};

template<class NameType,class AgeType>
class Person
{
public:
	//ȫ�ֺ��� ����ʵ��
	friend void ShowPerson(Person<NameType,AgeType> ts01)
	{
		cout<<"����ʵ��---"<<"������ "<<ts01.m_Name<<"���䣺 "<<ts01.m_Age<<endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�<>
	//���ȫ�ֺ���ʱ����ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void ShowPerson02<>(Person<NameType,AgeType> ts02);
public:
	Person(NameType tName,AgeType tAge)
	{
		this->m_Name=tName;
		this->m_Age=tAge;
	}
	~Person(){};
	NameType m_Name;
	AgeType m_Age;
private:

};

void test01()
{
	Person <string,int> ms01("����",28);
	ShowPerson(ms01);
	ShowPerson02(ms01);
}
int main()
{
	test01();
	system("pause");
	return 0;
}