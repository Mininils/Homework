#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int task1()
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	setlocale(LC_ALL, "RUS");
	printf("%c %d %g %lg", c, i, f, d);
	puts("\n������� ������");
	scanf("%c", &c);
	puts("\n������� �����");
	scanf("%d", &i);
	puts("\n������� �������");
	scanf("%f", &f);
	int cel;
	cel = (int)f;
	printf("\n 1A)\n ����� ����� %d, ������� ����� %10.5f", cel, f - (float)cel);
	puts("\n������� ����������������");
	scanf("%lg", &d);
	printf("\n1�) �������. %i ���������. %x", c, c);
	printf("\n1�) %f", 1 / (float)i);


}

int task2()
{
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = (int)a / b;
	y = (float)a / b;
	z = (double)a / b;
	printf("\n��� ��������� x y z:\n%i, %f, %d\n", x, y, z);

	printf("\n� ���������� x y z: %i,%f,%d\n", (int)a / b, (float)a / b, (double)a / b);

}

int task3()
{
	puts("������� ����� ���������� ����� N");
	int N;
	scanf("%d", &N);
	printf(" \n������� 3�: ��������� ����� ����� N:%d\n", N % 10);
	printf(" \n������� 3b: ������ ����� ����� N: %d\n", N / 100);
	printf(" \n������� 3c: ����� ���� ����� N:%d\n", (N % 10) + (N / 100) + (N - (N / 100 * 100) - (N % 10)) / 10);
}


int main()
{
	task1();
	task2();
	task3();
}