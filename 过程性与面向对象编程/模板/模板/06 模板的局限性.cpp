#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	Person(string tName,int tAge);
	~Person();
	string m_Name;
	int m_Age;
private:

};

Person::Person(string tName,int tAge)
{
	m_Name=tName;
	m_Age=tAge;
}

Person::~Person()
{
}
template<class T>
bool MyCompare(T ta,T tb)
{
	if (ta==tb)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<>bool MyCompare(Person ta,Person tb)
{
	if (ta.m_Name==tb.m_Name&&ta.m_Age==tb.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int ma=10;
	int mb=20;
	bool mres=MyCompare(ma,mb);
	if (mres==true)
	{
		cout<<"相等"<<endl;
	}
	else
	{
		cout<<"不相等"<<endl;
	}
}
void test02()
{
	Person ms01("Tom",18);
	Person ms02("Tom",18);
	bool mres=MyCompare(ms01,ms02);
	if (mres==true)
	{
		cout<<"Person 相等"<<endl;
	}
	else
	{
		cout<<"Person 不相等"<<endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}