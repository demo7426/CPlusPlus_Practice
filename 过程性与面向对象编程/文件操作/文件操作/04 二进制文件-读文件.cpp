#include<iostream>
using namespace std;
#include<fstream>
#include<string>

class Person
{
public:
	Person(){};
	~Person(){};
	char m_Name[64];
	int m_Age;
private:

};

void test01()
{
	fstream ms01;
	ms01.open("text.txt",ios::in|ios::binary);
	if (ms01.is_open())
	{
		Person ms02;
		ms01.read((char*)&ms02,sizeof(Person));
		cout <<"姓名："<<ms02.m_Name<<" 年龄："<<ms02.m_Age<<endl;
		ms01.close();
	}
	else
	{
		cout<<"文件打开失败!"<<endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}