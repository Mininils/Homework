#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	getchar();
	task1();
}

#define F 2.2
#define KG 0.45

int task1()
{
	int a;
	puts("������� ���-�� ������");
	scanf("%d", &a);
	printf("%d ������ - ��� %0.3f ��", a, a * KG );
	printf("\n%d ������ - ��� %0.3f ����", a, a * KG * 1000);
}