#include<iostream>
using namespace std;
#include<string>

typedef struct _Student6//标准定义方式
{
	string name;
	int age;
	float score;
}Student6,*pStudent6;


void PrintStudent2(const struct _Student6 *p1)
{
	//p1->age=38;//加入const限制之后不能更改结构体中的值
	cout<<"名字："<<p1->name<<" 年龄："<<p1->age<<" 分数："<<p1->score<<endl;
}
int main6()
{
	struct _Student6 ms1;
	ms1.name="张三";
	ms1.age=18;
	ms1.score=80;

	PrintStudent2(&ms1);
	cout<<"名字："<<ms1.name<<" 年龄："<<ms1.age<<" 分数："<<ms1.score<<endl;
	system("pause");
	return 0;
}