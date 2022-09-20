#include<iostream>
using namespace std;

class C1
{
	int m_a;//类里面成员默认为私有权限
public:
	C1();
	~C1();

};

C1::C1()
{
}

C1::~C1()
{
}

typedef struct _C3
{
	int m_b;//结构体成员默认权限为公共权限
}C3,*pC3;

int main4()
{
	C1 ms1;
	//ms1.m_a=100;//错误，类外无法访问
	C3 ms3;
	ms3.m_b=100;//公共权限可以访问
	cout<<ms3.m_b<<endl;
	system("pause");
	return 0;
}