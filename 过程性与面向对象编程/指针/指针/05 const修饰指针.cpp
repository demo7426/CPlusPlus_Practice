#include<iostream>
using namespace std;

int main5()
{
	int ma=10;
	int mb=20;
	int* const p=&ma;//ָ�볣��
	*p=15;
	//p=&mb;//����
	cout<<"*p��ֵΪ�� "<<*p<<endl;

	const int * p2=&ma;//����ָ��
	p2=&mb;
	//*p1=100;//����
	cout<<"*p2��ֵΪ�� "<<*p2<<endl;

	const int * const p3=&ma;//const������ָ�룬Ҳ���γ���
	//p3=&mb;//����
	//*p3=100;//����
	cout<<"*p3��ֵΪ�� "<<*p3<<endl;

	system("pause");
	return 0;
}
