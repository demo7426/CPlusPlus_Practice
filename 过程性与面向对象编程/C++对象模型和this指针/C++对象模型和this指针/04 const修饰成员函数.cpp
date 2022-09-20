#include<iostream>
using namespace std;

//常对象只能调用特殊值和常函数
//常函数只能修改特殊值
class Person
{
public:
	Person();
	~Person();
	int m_Age;
	mutable int m_Age02;//特殊变量，即使在常函数中也可以修改这个值

	//this指针的本质是指针常量，指针的指向是不可以修改的
	//const Person * const this;
	//在成员函数后加入const，修饰的是this指向，让指针指向的值也不可以修改
	void Show01()
	{
		m_Age=20;
		cout<<"Show01 函数调用"<<endl;
	}
	
	void Show02() const//常函数
	{
		//m_Age=10;//错误调用	
		m_Age02=12;
	}
private:

};

Person::Person()
{
	
}

Person::~Person()
{
}


void test01()
{
	Person p;
	p.Show01();
	p.Show02();
}

void test02()
{
	const Person p2;//常对象只能调用特殊值和常函数
	//p2.m_Age=10;//错误调用
	p2.m_Age02=20;//m_Age02是特殊值，在常对象下也可以修改
	//p2.Show01();//错误调用
	p2.Show02();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}