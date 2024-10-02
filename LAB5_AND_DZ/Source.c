#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define K 1.2

int task1()
{
	double gr;
	puts("Введите градусную меру угла");
	scanf("%lf", &gr);
	printf("Радиан в %.2lf градусах: %.6lf", gr, sin(gr * M_PI / 180));
}
int task2()
{
	double x, y, a, b, r1, r2, r3, r4, r5;
	puts("Введите x");
	scanf("%lf", &x);
	a = exp(K * x);
	b = pow(log(x), 2) + pow(K,5);
	r1 = (pow(a,2) + pow(b, 2));
	y = pow(r1, 1/3.);
	printf("x = %lf y = %.2lf", x, y);

}
int task3()
{
	double x, y, a, c, r1, r2, r3, r4, r5;
	puts("Введите x");
	scanf("%lf", &x);
	puts("Введите y");
	scanf("%lf", &y);
	//x = 3.7 * pow(10, -5); /* для второго контрольного примера */
	//y = -1; /* для второго контрольного примера */
	a = 7.1 * pow(10, -9);
	c = 2;
	r1 = pow(a, 5) + pow(sin(y - c), 4);
	r2 = pow(sin(x + y), 3) + fabs(x - y);
	r3 = r1 / r2;
	printf("x = %lf y = %.2lf F = %lf", x, y, r3);

}
int main()
{
	setlocale(LC_ALL, "RUS");
	//task1();
	//task2();
	task3();
}