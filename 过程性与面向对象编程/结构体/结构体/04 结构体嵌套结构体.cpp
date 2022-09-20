#include<iostream>
using namespace std;
#include<string>

struct Student4//简易定义结构体
{
	string name;
	int age;
	float score;
};

typedef struct _Class4//标准定义方式
{
	int num;//班级人数
	int num1;//女生数量
	int num2;//男生数量
	struct  Student4 stu;
}Class4,*pClass4;

int main4()
{
	Class4 ms;
	ms.num=100;
	ms.num1=20;
	ms.num2=80;
	ms.stu.age=15;
	ms.stu.name="张三";
	ms.stu.score=60;
	cout<<ms.num<<ms.num1<<ms.num2<<ms.stu.age<<endl;

	system("pause");
	return 0;
}