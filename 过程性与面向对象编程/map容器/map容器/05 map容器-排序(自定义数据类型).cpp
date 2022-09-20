#include<iostream>
using namespace std;
#include<string>
#include<map>

class Person
{
public:
	Person(){};
	Person(const string &tName,const int &tAge);
	~Person(){};

	string m_Name;
	int m_Age;
private:

};

Person::Person(const string &tName,const int &tAge)
{
	this->m_Name=tName;
	this->m_Age=tAge;
}

class MyCompare
{
public:
	MyCompare(){};
	~MyCompare(){};

	bool operator()(int ts01,int ts02)//���أ�ʹmap������keyֵ�Ӵ�С���������Ҫ����class�����������������Ҫװ�����������н����������
	{
		return ts01>ts02;
	}
private:

};

void test01()
{
	map<int,Person,MyCompare>mmap01;
	Person ms01("�ŷ�",28);
	Person ms02("����",18);
	Person ms03("����",20);
	Person ms04("��",40);

	mmap01.insert(make_pair(1,ms01));
	mmap01.insert(pair<int,Person>(2,ms02));
	mmap01.insert(map<int,Person>::value_type(3,ms03));
	mmap01[4]=ms04;

	for(map<int,Person,MyCompare>::iterator it=mmap01.begin();it!=mmap01.end();it++)
	{
		cout<<"keyֵ�� "<<it->first<<" valueֵ�� "<<"������ "<<it->second.m_Name<<" ���䣺 "<<it->second.m_Age<<endl; 
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}