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

int DZLAB4()
{
	puts("Известно, что бригада строителей может построить дом за X дней. Определить сколько");
	puts("получит бригада за строительство дома, если известно, что при его строительстве в N");
	puts("дней их зарплата равна S рублей, каждый день просрочки уменьшает ее на 50 / N%, ");
	puts("досрочная сдача увеличивает на эту же сумму.");
	int x;
	puts("Введите X количество дней, за которое бригада может построить дом");
	scanf("%f", &x);
	int n;
	puts("Введите N количество дней, за которое бригада построила дом");
	scanf("%f", &n);
	double s;
	puts("Базовая зарплата за строительство дома");
	scanf("%lf", &s);
	double prosrochka = (double)(n - x) * 50 / (100 * n); // просрочка установленного срока
	double itogovaya_zp = s * (1 + prosrochka); // изменение ставки зарплаты
	printf("Итоговая зарплата бригады: %.3f рублей\n", itogovaya_zp); 

}

int main()
{
	setlocale(LC_ALL, "RUS");
	/*task1();
	task2();
	task3();*/
	DZLAB4();
}