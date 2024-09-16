#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	/*getchar();
	task1();*/
	getchar();
	task2();
}

int task1()
{
	int num;
	puts("Введите первое число");
	scanf("%d", &num);
	puts("Введено число А");
	int nam;
	puts("Введите второе число");
	scanf("%d", &nam);
	puts("Введено число В");
	printf("Сумма чисел %d и %d = %i",num, nam, num + nam );
	printf("\nРазность чисел %d и %d = %i", num, nam, num - nam);
	printf("\nПроизведение чисел %d и %d = %i",num, nam, num * nam);
	printf("\nЧастное от деления %d на %d = %i, остаток от деления второго числа на первое = %i", nam, num, nam/num, nam % num);


}
#define D 2.54
#define S 2.32
#define L 2.71
int task2()
{
	int dym;
	float resultD;
	float resultS;
	float resultL;
	puts("Введите значение для рассчёта");
	scanf("%d", &dym);
	resultD = D * dym;
	resultS = S * dym;
	resultL = L * dym;

	printf("%d дюймов – это %0.2f см ", dym, resultD);
	printf("\n%d испанских дюймов – это %0.2f см ", dym, resultS);
	printf("\n%d старолитовских дюймов – это %0.2f см ", dym, resultL);
}
