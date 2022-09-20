#include<iostream>
using namespace std;
#include<string>

struct Student//简易定义结构体
{
	string name;
	int age;
	float score;
}s3;

typedef struct _Class//标准定义方式
{
	int num;//班级人数
	int num1;//女生数量
	int num2;//男生数量
}Class,*pClass;

int main1()
{
	Student s1={"李四",11,100};	//或者可以写成struct Student s1;
	cout<<"名字： "<<s1.name<<" 年龄： "<<s1.age<<" 分数："<<s1.score<<endl;

	s1.name="张三";
	s1.age=15;
	s1.score=90.5f;
	cout<<"名字： "<<s1.name<<" 年龄： "<<s1.age<<" 分数："<<s1.score<<endl;

	s3.name="王五";
	s3.age=18;
	s3.score=80.5f;
	cout<<"名字： "<<s3.name<<" 年龄： "<<s3.age<<" 分数："<<s3.score<<endl;

	_Class ms4;
	ms4.num=200;
	cout<<ms4.num<<endl;

	Class ms5;
	ms5.num1=50;
	cout<<ms5.num1<<endl;

	system("pause");
	return 0;
}