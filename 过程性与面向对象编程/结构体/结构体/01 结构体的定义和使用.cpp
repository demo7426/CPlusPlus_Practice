#include<iostream>
using namespace std;
#include<string>

struct Student//���׶���ṹ��
{
	string name;
	int age;
	float score;
}s3;

typedef struct _Class//��׼���巽ʽ
{
	int num;//�༶����
	int num1;//Ů������
	int num2;//��������
}Class,*pClass;

int main1()
{
	Student s1={"����",11,100};	//���߿���д��struct Student s1;
	cout<<"���֣� "<<s1.name<<" ���䣺 "<<s1.age<<" ������"<<s1.score<<endl;

	s1.name="����";
	s1.age=15;
	s1.score=90.5f;
	cout<<"���֣� "<<s1.name<<" ���䣺 "<<s1.age<<" ������"<<s1.score<<endl;

	s3.name="����";
	s3.age=18;
	s3.score=80.5f;
	cout<<"���֣� "<<s3.name<<" ���䣺 "<<s3.age<<" ������"<<s3.score<<endl;

	_Class ms4;
	ms4.num=200;
	cout<<ms4.num<<endl;

	Class ms5;
	ms5.num1=50;
	cout<<ms5.num1<<endl;

	system("pause");
	return 0;
}