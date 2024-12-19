#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define PI 3.14
#define N 10

typedef double (*TFun)(double);
double f1(double x);
double f2(double x);
double f3(double x);

void Out_Rez(TFun, double, double, double);

int main() {
    setlocale(LC_CTYPE, "RUS");

    double* array;
    double x, mas[N];
    int n;

    double a, b, h;
    puts("Введите a,b,h");
    scanf("%lf%lf%lf", &a, &b, &h);

    puts("\n\t Function 1");
    Out_Rez(f1, a, b, h);
    puts("\n\t Function 2");
    Out_Rez(f2, a, b, h);
    puts("\n\t Function 3");
    Out_Rez(f3, a, b, h);
    getchar();


}

double f1(double x) {
    return (1 - exp(x - 1)) / (1 + pow(x, 2) * abs(PI - sin(x / 3)));
}

double f2(double x) {
    if (x > PI) {
        return pow(fabs(3.0 / 7.0 / x), 1.0 / 3);
    }
    else if (x >= -PI && x <= PI) {
        return 1 - pow(cos(fabs(x)), 3);
    }
    else {
        return exp(-pow(x, 2));
    }
}

double f3(double x) {
    //интегральный синус через ряд Тейора
    double sum = 0.0; //для накопления суммы членов ряда
    double term = x; //для хранения текущего члена ряда
    int sign = 1;//для чередования знаков членов рядa
    int terms = 100; // количество членов ряда для достижения точности, определяет количество членов ряда, которые будут использоваться для вычисления интегрального синуса

    for (int k = 0; k < terms; k++) { //выполняется terms раз, k счетик
        sum += sign * term / (2 * k + 1); //добавление текущего члена ряда к переменной sum
        sign = -sign;//чередование знаков членов ряда
        term *= x * x / ((2 * k + 2) * (2 * k + 3));//обновление переменной term для следующего члена ряда
    }

    return sum;
}

void Out_Rez(TFun f, double xn, double xk, double h)
{
    for (double x = xn; x <= xk; x += h)
        printf("|x = %5.2lf| y = %8.4lf|\n", x, f(x));
}