#include <stdio.h>
#include <locale.h>
char c = '!';
int i = 2;
float f = 3.14f;
double d = 5e-12;
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("%c %d %g %lg", c, i, f, d);
	puts("\n1Введите строку");
	scanf("%c", &c);
	puts("\nВведите целое");
	scanf("%d", &i);
	puts("\nВведите дробное");
	scanf("%f", &f);
	int integer_f = f;
	puts("\nВведите экспоненциальное");
	scanf("%lg", &d);
	printf("\n1A) целая часть числа %.f, дробная часть числа %d", f, f - integer_f);
	printf("\n1Б) дястичн. %i шестнадст. %x", i, i);
	printf("\n1В) дястичн. %i шестнадст. %x", i, i);


}