#include<iostream>
using namespace std;

int main4()
{
	int ma=10;
	int* p=(int*) 0x1200;//Ұָ�룬û�з���0x1200�����ַ��Ȩ��
	*p=520;

	cout<<*p<<endl;
	system("pause");
	return 0;
}
//��ָ���Ұָ������һ�㲻Ҫȥ������ʣ����׳���