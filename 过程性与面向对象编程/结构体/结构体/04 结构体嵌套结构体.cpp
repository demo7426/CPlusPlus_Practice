#include<iostream>
using namespace std;
#include<string>

struct Student4//���׶���ṹ��
{
	string name;
	int age;
	float score;
};

typedef struct _Class4//��׼���巽ʽ
{
	int num;//�༶����
	int num1;//Ů������
	int num2;//��������
	struct  Student4 stu;
}Class4,*pClass4;

int main4()
{
	Class4 ms;
	ms.num=100;
	ms.num1=20;
	ms.num2=80;
	ms.stu.age=15;
	ms.stu.name="����";
	ms.stu.score=60;
	cout<<ms.num<<ms.num1<<ms.num2<<ms.stu.age<<endl;

	system("pause");
	return 0;
}