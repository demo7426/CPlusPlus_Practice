#include<iostream>
using namespace std;

//公共权限 public     成员 类内可以访问 类外可以访问
//保护权限 protected  成员 类内可以访问 类外不可以访问 子类可以访问父类
//私有权限 private    成员 类内可以访问 类外不可以访问 子类不可以访问父类

class Person
{
public:
	Person();
	~Person();
	string m_Name;//名字
protected:
	string m_Car;//汽车
private:
	int m_IdPassword;//银行卡密码
public:
	void change()
	{
		m_Name="张三";
		m_Car="雷克萨斯";
		m_IdPassword=666888;
	}
};

Person::Person()
{
}

Person::~Person()
{
}

int main()
{
	Person ms;
	ms.m_Name="李四";
	//ms.m_Car="奔驰";//类外无法访问protected成员
	//ms.m_IdPassword=666666;//类外无法访问public成员
	ms.change();
	cout << (&ms)->m_Name << endl;
	system("pause");
	return 0;
}