#include<iostream>
using namespace std;
#include<string>
#include"Person.h"

template<class nametype,class agetype>
Person<nametype,agetype>::Person(nametype tname,agetype tage)
{
	this->m_name=tname;
	this->m_age=tage;
}
template<class nametype,class agetype>
void Person<nametype,agetype>::showperson()
{
	cout<<"���֣� "<<this->m_name<<" ���䣺 "<<this->m_age<<endl;
}