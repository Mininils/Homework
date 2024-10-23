#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int task2()
{
    float step, y;
    puts("¬ведите число");
    scanf("%f", &step);
    printf("\tx\t\ty\n");
    for (float x = 0.15; x <= 2.1; x += step) {
        y = x - 3 * pow(cos(1.04 * x), 2);
        printf("|\t%.2f\t|\t%.4f\t|\n", x, y);
    }
}
int dz_lab8()
{
    int n;
    double x, result;
    printf("¬ведите натуральное число n: ");
    scanf("%d", &n);
    printf("¬ведите действительное число x: ");
    scanf("%lf", &x);

    if (n <= 0) {
        printf("ќшибка: n должно быть натуральным числом.n");
    }

    result = 0.0;

    for (int i = 0; i < n; i++) {
        result += x;
        x = sin(x);
    }
    printf("–езультат: %.3f", result);

}
int main()
{
    setlocale(LC_ALL, "rus");
    //task2();
    dz_lab8();
}