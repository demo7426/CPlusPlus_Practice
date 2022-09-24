#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

/*
sscanf的使用:
	%* s或%* d	跳过数据
	% [width]s	读指定宽度的数据
	% [a - z]	匹配a到z中任意字符(尽可能多的匹配)
	% [aBc]	匹配a、B、c中一员，贪婪性
	% [^ a] 	匹配非a的任意字符，贪婪性
	% [^ a - z]	表示读取除a - z以外的所有字符
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
