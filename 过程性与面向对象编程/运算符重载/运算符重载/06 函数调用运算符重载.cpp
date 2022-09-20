#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	Person();
	~Person();
	void operator()(string t01)
	{
		cout<<t01<<endl;
	}
private:

};

Person::Person()
{
}

Person::~Person()
{
}

class printf01
{
public:
	printf01();
	~printf01();
	void operator()(int ta,int tb)
	{
		cout<<ta+tb<<endl;
	}
private:

};

printf01::printf01()
{
}

printf01::~printf01()
{
}
void test01()
{
	Person ms01;//伪函数调用,函数体可以自己任意改写
	ms01("hello world");
	printf01 ms02;
	ms02(10,20);//伪函数调用,函数体可以自己任意改写
}
int main()
{
	test01();
	system("pause");
	return 0;
}