#include<iostream>
using namespace std;
#include<string>

struct Student2//���׶���ṹ��
{
	string name;
	int age;
	float score;
}s3;

typedef struct _Class2//��׼���巽ʽ
{
	int num;//�༶����
	int num1;//Ů������
	int num2;//��������
}Class2,*pClass2;

int main()
{
	Class2 m3;
	pClass2 p3=&m3;//Ҳ����д��:Class2* p3=&m3;
	p3->num=30;
	cout<<m3.num<<endl;

	_Class2 marr[3]={{200,100,100},{300,50,250},{240,130,110}};
	for (int i = 0; i < 3; i++)
	{
		cout<<"�༶�������� "<<marr[i].num<<" Ů�������� "<<marr[i].num1<<" ���������� "<<marr[i].num2<<endl;
	}
	cout<<"\n";

	marr[0].num=100;
	marr[0].num1=40;
	marr[0].num2=60;
	for (int i = 0; i < 3; i++)
	{
		cout<<"�༶�������� "<<marr[i].num<<" Ů�������� "<<marr[i].num1<<" ���������� "<<marr[i].num2<<endl;
	}

	system("pause");
	return 0;
}