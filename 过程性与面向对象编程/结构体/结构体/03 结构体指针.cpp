#include<iostream>
using namespace std;
#include<string>

struct Student3//���׶���ṹ��
{
	string name;
	int age;
	float score;
};

typedef struct _Class3//��׼���巽ʽ
{
	int num;//�༶����
	int num1;//Ů������
	int num2;//��������
}Class3,*pClass3;

int main3()
{
	_Class3 marr[3]={{200,100,100},{300,50,250},{240,130,110}};
	for (int i = 0; i < 3; i++)
	{
		cout<<"�༶�������� "<<marr[i].num<<" Ů�������� "<<marr[i].num1<<" ���������� "<<marr[i].num2<<endl;
	}
	cout<<"\n";

	marr[0].num=100;
	marr[0].num1=40;
	marr[0].num2=60;

	struct _Class3 *p3=marr;//�ṹ��ָ��
	//����д��_Class3 *p3=marr;
	for (int i = 0; i < 3; i++)
	{
		cout<<"�༶�������� "<<p3->num<<" Ů�������� "<<p3->num1<<" ���������� "<<p3->num2<<endl;
		p3++;
	}

	system("pause");
	return 0;
}