#include<iostream>
using namespace std;
#include<string>

//提前让编译器知道Person的存在
template<class NameType,class AgeType>
class Person;

//全局函数 类外实现
template<class NameType,class AgeType>
void ShowPerson02(Person<NameType,AgeType> ts02)
{
	cout<<"类外实现---"<<"姓名： "<<ts02.m_Name<<"年龄： "<<ts02.m_Age<<endl;
};

template<class NameType,class AgeType>
class Person
{
public:
	//全局函数 类内实现
	friend void ShowPerson(Person<NameType,AgeType> ts01)
	{
		cout<<"类内实现---"<<"姓名： "<<ts01.m_Name<<"年龄： "<<ts01.m_Age<<endl;
	}

	//全局函数 类外实现
	//加空模板参数列表<>
	//如果全局函数时类外实现，需要让编译器提前知道这个函数的存在
	friend void ShowPerson02<>(Person<NameType,AgeType> ts02);
public:
	Person(NameType tName,AgeType tAge)
	{
		this->m_Name=tName;
		this->m_Age=tAge;
	}
	~Person(){};
	NameType m_Name;
	AgeType m_Age;
private:

};

void test01()
{
	Person <string,int> ms01("张三",28);
	ShowPerson(ms01);
	ShowPerson02(ms01);
}
int main()
{
	test01();
	system("pause");
	return 0;
}