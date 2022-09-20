#pragma once
#include<iostream>
using namespace std;
#include<string>

template<class nametype,class agetype>
class Person
{
public:
	Person(nametype tname,agetype tage);

	void showperson();
	~Person(){};
	nametype m_name;
	agetype m_age;
private:

};
template<class nametype,class agetype>
Person<nametype,agetype>::Person(nametype tname,agetype tage)
{
	this->m_name=tname;
	this->m_age=tage;
}
template<class nametype,class agetype>
void Person<nametype,agetype>::showperson()
{
	cout<<"Ãû×Ö£º "<<this->m_name<<" ÄêÁä£º "<<this->m_age<<endl;
}