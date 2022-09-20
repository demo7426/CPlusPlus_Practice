#include<iostream>
using namespace std;
#include<string>

typedef struct _Student5//标准定义方式
{
	string name;
	int age;
	float score;
}Student5,*pStudent5;

void PrintStudent1(struct _Student5 ts1)//值传递，复制结构体所有参数
{
	ts1.age=28;
	cout<<"名字："<<ts1.name<<" 年龄："<<ts1.age<<" 分数："<<ts1.score<<endl;
}

void PrintStudent2(struct _Student5 *p1)//指针传递，一个指针只占用4个字节，进一步节省空间
{
	p1->age=38;
	cout<<"名字："<<p1->name<<" 年龄："<<p1->age<<" 分数："<<p1->score<<endl;
}

void  PrintStudent3(struct _Student5 tarray[],int len)//数组传递
{
	for (int i = 0; i < len; i++)
	{
		cout<<"名字："<<tarray[i].name<<" 年龄："<<tarray[i].age<<" 分数："<<tarray[i].score<<endl;
	}
}
int main5()
{
	struct _Student5 ms1;
	ms1.name="张三";
	ms1.age=18;
	ms1.score=80;

	PrintStudent1(ms1);
	cout<<"名字："<<ms1.name<<" 年龄："<<ms1.age<<" 分数："<<ms1.score<<endl;
	cout<<"\n";

	PrintStudent2(&ms1);
	cout<<"名字："<<ms1.name<<" 年龄："<<ms1.age<<" 分数："<<ms1.score<<endl;
	cout<<"\n";
	
	Student5 a[3]={{"张三",18,60},"李四",20,90,"王五",15,60};
	PrintStudent3(a,sizeof(a)/sizeof(a[0]));
	system("pause");
	return 0;
}