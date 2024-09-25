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
	puts("\nВведите символ");
	scanf("%c", &c);
	puts("\nВведите целое");
	scanf("%d", &i);
	puts("\nВведите дробное");
	scanf("%f", &f);
	int cel;
	cel = (int)f;
	printf("\n 1A)\n целая часть %d, дробная часть %10.5f", cel, f - (float)cel);
	puts("\nВведите экспоненциальное");
	scanf("%lg", &d);
	printf("\n1Б) дястичн. %i шестнадст. %x", c, c);
	printf("\n1В) %f", 1 / (float)i);


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
	printf("\nБез удаленных x y z:\n%i, %f, %d\n", x, y, z);

	printf("\nС удаленными x y z: %i,%f,%d\n", (int)a / b, (float)a / b, (double)a / b);

}

int task3()
{
	puts("Введите целое трёхзначное число N");
	int N;
	scanf("%d", &N);
	printf(" \nЗадание 3а: последняя цифра числа N:%d\n", N % 10);
	printf(" \nЗадание 3b: первая цифра числа N: %d\n", N / 100);
	printf(" \nЗадание 3c: сумма цифр числа N:%d\n", (N % 10) + (N / 100) + (N - (N / 100 * 100) - (N % 10)) / 10);
}


int main()
{
	task1();
	task2();
	task3();
}