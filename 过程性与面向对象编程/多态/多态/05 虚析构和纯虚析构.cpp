#include<iostream>
using namespace std;
#include<string>

//子类在堆区创建数据，通过父类的指针或者引用来调用，需要在父类创建虚析构函数或者纯虚析构函数，以保证子类析构函数的调用
class Animal
{
public:
	Animal();

	virtual ~Animal();//虚析构函数（在类外部创建函数体不做要求）
	//可以写为：virtual ~Animal()=0;//纯虚构函数（必须在类外部创建函数体）

	virtual void func()
	{}
private:

};

Animal::Animal()
{
	cout<<"父类无参构造函数的调用"<<endl;
}

Animal::~Animal()
{
	cout<<"父类析构函数的调用"<<endl;
}
class Cat:public Animal
{
public:
	Cat(string tName01);
	virtual ~Cat();
	virtual void func()
	{
		cout<<"子类func的调用"<<endl;
	}
	string *m_Name;
private:

};

Cat::Cat(string tName01)
{
	m_Name=new string(tName01);
	cout<<"子类类无参构造函数的调用"<<endl;
	cout<<"猫的名字叫："<<*m_Name<<endl;
}

Cat::~Cat()
{
	if (m_Name!=NULL)
	{
		delete m_Name;
		m_Name=NULL;
		cout<<"子类析构函数的调用"<<endl;
	}
}
void test01()
{
	Animal *mp01=new Cat("Tom");
	mp01->func();
	delete mp01;
	mp01=NULL;
}
int main ()
{
	test01();
	system("pause");
	return 0;
}