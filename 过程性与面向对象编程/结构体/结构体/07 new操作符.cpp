#include<iostream>
using namespace std;
#include<string>

int* fuc()
{
	int* m_p= new int(5);//在堆区创建一个int的值
	return m_p;
}

int* fuc2()
{
	int* m_p1=new int[10];//在堆区创建数组
	return m_p1;
}

int main7()
{
	int* p=fuc();
	cout<<*p<<endl;
	delete p;//释放


	int* p1=fuc2();
	for (int i = 0; i < 10; i++)
	{
		p1[i]=100+i;
		cout<<*(p1+i)<<endl;
	}
	delete[] p1;//释放堆区数组 

	system("pause");
	return 0;
}