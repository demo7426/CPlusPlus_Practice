#include<iostream>
using namespace std;
#include<string>

typedef struct _Student6//��׼���巽ʽ
{
	string name;
	int age;
	float score;
}Student6,*pStudent6;


void PrintStudent2(const struct _Student6 *p1)
{
	//p1->age=38;//����const����֮���ܸ��Ľṹ���е�ֵ
	cout<<"���֣�"<<p1->name<<" ���䣺"<<p1->age<<" ������"<<p1->score<<endl;
}
int main6()
{
	struct _Student6 ms1;
	ms1.name="����";
	ms1.age=18;
	ms1.score=80;

	PrintStudent2(&ms1);
	cout<<"���֣�"<<ms1.name<<" ���䣺"<<ms1.age<<" ������"<<ms1.score<<endl;
	system("pause");
	return 0;
}