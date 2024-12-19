#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

typedef double (*TFun)(double);

double func(double x) {
    return x * x - 4; // Например, f(x) = x^2 - 4
}

int calculate(TFun prtf, double* x, int n);
int put_elements(double* ptr_array, int n);


int main() {
    setlocale(LC_ALL, "RUS");
    int size;
    printf("Введите размер исходного массива : ");
    scanf("%d", &size);
    
    double* array = (double*)malloc(size * sizeof(double));

    for (int i = 0; i < size; i++) {
        array[i] = (i - 10);
    }

    printf("\nИсходный массив:\n");
    put_elements(array, size);

    calculate(func, array, size);

    printf("\nИзменённый массив:\n");
    put_elements(array, size);

    
    free(array);

    return 0;
}

int calculate(TFun prtf, double* x, int n) {
    for (int i = 0; i < n; i++) {
        double val = prtf(x[i]);
        if (val > 0) {
            x[i] = -x[i]; 
        }
        else if (val < 0) {
            x[i] = -x[i];
        }
    }
    return 0;
}

int put_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %.2f\n", i, ptr_array[i]);
    }
    return 0;
}