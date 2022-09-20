#include<iostream>
using namespace std;
#include<queue>
#include<string>

class Person
{
public:
	Person(string tName,int tAge)
	{
		this->m_Name=tName;
		this->m_Age=tAge;
	};
	~Person(){};
	string m_Name;
	int m_Age;
private:

};

void test01()
{
	Person ms01("唐僧",20);
	Person ms02("孙悟空",1000);
	Person ms03("猪八戒",900);
	Person ms04("沙僧",800);

	queue<Person> mque01;
	mque01.push(ms01);
	mque01.push(ms02);
	mque01.push(ms03);
	mque01.push(ms04);

	cout<<"queue容器大小为： "<<mque01.size()<<endl;
	while(!mque01.empty())
	{
		cout<<"队列头元素： "<<"姓名： "<<mque01.front().m_Name<<"年龄： "<<mque01.front().m_Age<<endl;
		cout<<"队列尾元素： "<<"姓名： "<<mque01.back().m_Name<<"年龄： "<<mque01.back().m_Age<<endl;
		mque01.pop();
	}
	cout<<"queue容器大小为： "<<mque01.size()<<endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}