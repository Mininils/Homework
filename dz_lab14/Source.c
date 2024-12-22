#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define N 1000

double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
double func(double* arr, int size, double A);

int main() {
    setlocale(LC_ALL, "rus");
    double array[N];
    int size;
    double A;

    printf("Введите размер массива (максимум %d) - ", N);
    scanf("%d", &size);

    full_elements(array, size);

    printf("Исходный массив:\n");
    put_elements(array, size);

    printf("Введите значение A - ");
    scanf("%lf", &A); // Чтение значения A

    double result = func(array, size, A);

    if (result != 0) {
        printf("Максимальное по модулю значение, не равное %.lf: %.lf\n", A, result); // Изменен формат вывода
    }
    else {
        printf("Не найдено значений, не равных %.lf.\n", A);
    }

    return 0;
}

double* full_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        double x = (double)i;
        ptr_array[i] = x * x * x - 350 * x;
    }
    return ptr_array;
}

int put_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %.lf\n", i, ptr_array[i]);
    }
    return 0;
}

double func(double* arr, int size, double A) {
    double maxAbs = 0;
    for (size_t i = 0; i < size; i++) {
        if (arr[i] != A) {
            if (fabs(arr[i]) > fabs(maxAbs)) {
                maxAbs = arr[i];
            }
        }
    }

    return maxAbs;
}
