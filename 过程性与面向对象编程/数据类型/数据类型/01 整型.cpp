#include<iostream>
using namespace std;

int main1()
{
	//短整型，2字节（-2^15~2^15-1）
	short mnum1=32769;//超过存储范围了
	//整型,4字节
	int mnum2=32768;
	//长整型windows为4字节，32为linus为4字节、64位Linus为8字节
	long mnum3=6116;
	//长长整形，8字节
	long long mnumm4=578;
	cout<<"mnum1="<<mnum1<<endl;
	cout<<"mnum2="<<mnum2<<endl;
	system("pause");
	return 0;
}