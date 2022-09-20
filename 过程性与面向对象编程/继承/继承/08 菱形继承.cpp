#include<iostream>
using namespace std;
#include<string.h>

//Animal类为Sheep和Camel的虚基类
//可以通过开发人员命令符查看
class Animal
{
public:
	Animal(){};
	~Animal(){};
	int m_Age;
private:

};
class Sheep:virtual public Animal
{
public:
	Sheep(){};
	~Sheep(){};
};
class Camel:virtual public Animal
{
public:
	Camel(){};
	~Camel(){};
};
class SheepCamel:public Sheep,public Camel
{
public:
	SheepCamel(){};
	~SheepCamel(){};

private:

};

void test01()
{
	SheepCamel ms01;
	ms01.Sheep::m_Age=18;
	ms01.Camel::m_Age=28;
	cout<<"ms01.Sheep::m_Age= "<<ms01.Sheep::m_Age<<endl;
	cout<<"ms01.Camel::m_Age= "<<ms01.Camel::m_Age<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}