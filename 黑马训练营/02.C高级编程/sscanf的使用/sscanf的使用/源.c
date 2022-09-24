#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

/*
sscanf��ʹ��:
	%* s��%* d	��������
	% [width]s	��ָ����ȵ�����
	% [a - z]	ƥ��a��z�������ַ�(�����ܶ��ƥ��)
	% [aBc]	ƥ��a��B��c��һԱ��̰����
	% [^ a] 	ƥ���a�������ַ���̰����
	% [^ a - z]	��ʾ��ȡ��a - z����������ַ�
*/ 

void test01()
{
	char* chName = "helloworld@itcast.cn";
	char ch1[1024] = { 0 };
	char ch2[1024] = { 0 };

	sscanf(chName, "%[^@]@%s", ch1, ch2);
	printf("%s\t%s\n", ch1, ch2);
}

void test02()
{
	char* chName = "123abcd$myname@000qwe";
	char ch1[1024] = { 0 };

	sscanf(chName, "%*[^$]$%[^@]", ch1);
	printf("%s\n", ch1);
}

int main(void)
{
	test01();
	test02();
	return EXIT_SUCCESS;
}
