#include<iostream>
using namespace std;
#include<string>

class Person;
class Gay
{
public:
	Gay();
	~Gay();

private:

};

class Person
{
	friend  Gay::Gay();
public:
	Person();
	~Person();

	string name;
private:
	int Id;
};

Person::Person()
{
	name="уехЩ";
	Id=20210716;
}

Person::~Person()
{}

Gay::Gay()
{
	Person t02;
	cout<<t02.name<<endl;
	cout<<t02.Id<<endl;
}

Gay::~Gay()
{
}


int main()
{
	Gay s03;
	Person s02;

	system("pause");
	return 0;
}