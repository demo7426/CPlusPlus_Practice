#include<iostream>
using namespace std;
#include<string>

int* fuc()
{
	int* m_p= new int(5);//�ڶ�������һ��int��ֵ
	return m_p;
}

int* fuc2()
{
	int* m_p1=new int[10];//�ڶ�����������
	return m_p1;
}

int main7()
{
	int* p=fuc();
	cout<<*p<<endl;
	delete p;//�ͷ�


	int* p1=fuc2();
	for (int i = 0; i < 10; i++)
	{
		p1[i]=100+i;
		cout<<*(p1+i)<<endl;
	}
	delete[] p1;//�ͷŶ������� 

	system("pause");
	return 0;
}