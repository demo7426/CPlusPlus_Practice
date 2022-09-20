#include<stdio.h>
#include<iostream>
using namespace std;

void test01()
{
	int ma;
	char marry[10];
	printf("请输入字符个数： ");
	scanf_s("%d",&ma);
	printf("请输入字符： ");
	for (int i = 0; i < ma; i++)
	{
		scanf_s("%c",&marry[i]);
	}
	marry[9]='\0';
	printf("%s",marry);
}
int main()
{
	test01();
	system("pause");
	return 0;

}