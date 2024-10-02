#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	puts("¬ведите число в диапазоне от 1 до 99");
	int a;
	scanf("%d", &a);
	if (a >= 5 && a <= 20 && a != 2 && a != 3 && a != 4 && (a % 10 >= 5 && a % 10 <= 9 ))
	{
		printf("%d копеек", a);
	}
	if (a % 10 == 1 && a != 11)
	{
		printf("%d копейка", a);
	}
	if (a % 10 >= 2 && a % 10 <= 4) 
	{
		printf("%d копейки", a);
	}
	if (a % 10 >= 5 && a % 10 <= 9)
	{
		printf("%d копеек", a);
	}
	if (a % 10 == 0)
	{
		printf("%d копеек", a);
	}
}