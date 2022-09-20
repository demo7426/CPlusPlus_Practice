#include<iostream>
using namespace std;
#include<set>
#include<string>

class Person
{
public:
	Person(const string &tName,const int &tAge)//���߿���д�� Person(string &tName,int &tAge)
	{
		this->m_Name=tName;
		this->m_Age=tAge;
	};
	~Person(){};

	string m_Name;
	int m_Age;
private:

};


class Compare
{
public:
	Compare(){};
	~Compare(){};
	bool operator()(Person tms01,Person tms02)//����operator()
	{
		return tms01.m_Age>tms02.m_Age;
	}

private:

};

void test01()
{
	set<Person,Compare> mset02;

	Person ms01("����",29);
	Person ms02("����",25);
	Person ms03("����",19);
	Person ms04("�ŷ�",30);
	Person ms05("����",52);
	//�������ݣ�ֻ��insert��ʽ
	mset02.insert(ms01);
	mset02.insert(ms02);
	mset02.insert(ms03);
	mset02.insert(ms04);
	mset02.insert(ms05);


	for(set<Person,Compare>::iterator tp02=mset02.begin();tp02!=mset02.end();tp02++)
	{
		cout<<"������ "<<tp02->m_Name<<" ���䣺 "<<tp02->m_Age<<endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}