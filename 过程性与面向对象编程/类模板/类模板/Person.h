#pragma once//��ֹͷ�ļ��ظ�����
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