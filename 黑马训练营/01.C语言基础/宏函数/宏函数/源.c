#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define MyAddFunc(tx, ty) (tx + ty)//ºêº¯Êý

int main(void)
{
	printf("%f\n", MyAddFunc(10.78, 20));
	
	return EXIT_SUCCESS;
}
