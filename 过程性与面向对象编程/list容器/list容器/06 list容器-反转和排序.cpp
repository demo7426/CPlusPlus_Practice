#include<iostream>
using namespace std;
#include<list>

void PrintList(list<int> tlis01)
{
	for(list<int>::iterator tp01=tlis01.begin();tp01!=tlis01.end();tp01++)
	{
		cout<<*tp01<<" ";
	}
	cout<<endl;
}

bool Compare(int tNum01,int tNum02)
{
	return tNum01>tNum02;
}

void test01()
{
	list<int> mlis01;
	mlis01.push_back(20);
	mlis01.push_back(10);
	mlis01.push_back(40);
	mlis01.push_back(30);

	//��������
	PrintList(mlis01);

	cout<<"��ת�� "<<endl;
	mlis01.reverse();
	PrintList(mlis01);

	//���в�֧��������ʵĵ��������������ñ�׼�㷨
	//��֧��������ʵĵ�����,�ڲ����ṩһЩ��Ӧ���㷨
	//sort(mlis01.begin(),mlis01.end());//����
	cout<<"���� "<<endl;
	mlis01.sort();
	PrintList(mlis01);

	cout<<"���� "<<endl;
	mlis01.sort(Compare);
	PrintList(mlis01);
}


int main()
{
	test01();
	system("pause");
	return 0;
}