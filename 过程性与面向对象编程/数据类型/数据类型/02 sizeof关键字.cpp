#include<iostream>
using namespace std;

int main2()
{
	//�����ͣ�2�ֽڣ�-2^15~2^15-1��
	short mnum1=32769;//�����洢��Χ��
	//����,4�ֽ�
	int mnum2=32768;
	//������windowsΪ4�ֽڣ�32ΪlinusΪ4�ֽڡ�64λLinusΪ8�ֽ�
	long mnum3=6116;
	//�������Σ�8�ֽ�
	long long mnumm4=578;
	cout<<"short��ռ�ռ�Ϊ"<<sizeof(short)<<endl;
	cout<<"int��ռ�ռ�Ϊ"<<sizeof(mnum2)<<endl;
	system("pause");
	return 0;
}