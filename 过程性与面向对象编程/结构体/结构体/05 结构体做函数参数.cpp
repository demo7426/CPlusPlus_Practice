#include<iostream>
using namespace std;
#include<string>

typedef struct _Student5//��׼���巽ʽ
{
	string name;
	int age;
	float score;
}Student5,*pStudent5;

void PrintStudent1(struct _Student5 ts1)//ֵ���ݣ����ƽṹ�����в���
{
	ts1.age=28;
	cout<<"���֣�"<<ts1.name<<" ���䣺"<<ts1.age<<" ������"<<ts1.score<<endl;
}

void PrintStudent2(struct _Student5 *p1)//ָ�봫�ݣ�һ��ָ��ֻռ��4���ֽڣ���һ����ʡ�ռ�
{
	p1->age=38;
	cout<<"���֣�"<<p1->name<<" ���䣺"<<p1->age<<" ������"<<p1->score<<endl;
}

void  PrintStudent3(struct _Student5 tarray[],int len)//���鴫��
{
	for (int i = 0; i < len; i++)
	{
		cout<<"���֣�"<<tarray[i].name<<" ���䣺"<<tarray[i].age<<" ������"<<tarray[i].score<<endl;
	}
}
int main5()
{
	struct _Student5 ms1;
	ms1.name="����";
	ms1.age=18;
	ms1.score=80;

	PrintStudent1(ms1);
	cout<<"���֣�"<<ms1.name<<" ���䣺"<<ms1.age<<" ������"<<ms1.score<<endl;
	cout<<"\n";

	PrintStudent2(&ms1);
	cout<<"���֣�"<<ms1.name<<" ���䣺"<<ms1.age<<" ������"<<ms1.score<<endl;
	cout<<"\n";
	
	Student5 a[3]={{"����",18,60},"����",20,90,"����",15,60};
	PrintStudent3(a,sizeof(a)/sizeof(a[0]));
	system("pause");
	return 0;
}