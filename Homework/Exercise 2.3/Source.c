#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	getchar();
	task3();
}
int task3()
{
	float L = 137;
	int n = 2;
	int k = 2;
	int m = 4;
	printf("Дано:\n\t%3d\n\t%3.0f\n\t_________\nОтвет:\n\t%0+8.4f", n, L, n/L);
}