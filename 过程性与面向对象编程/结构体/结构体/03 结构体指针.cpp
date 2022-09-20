#include<iostream>
using namespace std;
#include<string>

struct Student3//简易定义结构体
{
	string name;
	int age;
	float score;
};

typedef struct _Class3//标准定义方式
{
	int num;//班级人数
	int num1;//女生数量
	int num2;//男生数量
}Class3,*pClass3;

int main3()
{
	_Class3 marr[3]={{200,100,100},{300,50,250},{240,130,110}};
	for (int i = 0; i < 3; i++)
	{
		cout<<"班级总人数： "<<marr[i].num<<" 女生数量： "<<marr[i].num1<<" 男生数量： "<<marr[i].num2<<endl;
	}
	cout<<"\n";

	marr[0].num=100;
	marr[0].num1=40;
	marr[0].num2=60;

	struct _Class3 *p3=marr;//结构体指针
	//可以写成_Class3 *p3=marr;
	for (int i = 0; i < 3; i++)
	{
		cout<<"班级总人数： "<<p3->num<<" 女生数量： "<<p3->num1<<" 男生数量： "<<p3->num2<<endl;
		p3++;
	}

	system("pause");
	return 0;
}