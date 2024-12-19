#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

double* ptr_array_d;
double* ptr_array_a;
double* ptr_array_b;

double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
double min_i(double* array, int size);
int d_array(double* d_array, double* a_array, int size_a, double* b_array, int size_b);

int dz() {
    int size_a, size_b;

    printf("������� ������ ������� a: ");
    scanf("%d", &size_a);    

    printf("������� ������ ������� b: ");
    scanf("%d", &size_b);

    ptr_array_a = (double*)malloc(size_a * sizeof(double));
    if (ptr_array_a == NULL) {
        puts("������ ��� ��������� ������ ��� ������� a");
        return -1;
    }
    full_elements(ptr_array_a, size_a);
    
    ptr_array_b = (double*)malloc(size_b * sizeof(double));
    if (ptr_array_b == NULL) {
        puts("������ ��� ��������� ������ ��� ������� b");
        free(ptr_array_a);
        return -1;
    }
    full_elements(ptr_array_b, size_b);
    

    int size_d = size_a + size_b - 2;
    ptr_array_d = (double*)malloc(size_d * sizeof(double));
    if (ptr_array_d == NULL) {
        puts("������ ��� ��������� ������ ��� ������� d");
        free(ptr_array_a);
        free(ptr_array_b);
        return -1;
    }
    printf("������ a:\n");
    put_elements(ptr_array_a, size_a);
    printf("\n");
    printf("������ b:\n");
    put_elements(ptr_array_b, size_b);
    printf("\n");

    d_array(ptr_array_d, ptr_array_a, size_a, ptr_array_b, size_b);

    printf("������ d:\n");
    put_elements(ptr_array_d, size_d);

    free(ptr_array_d);
    free(ptr_array_a);
    free(ptr_array_b);

    return 0;
}

double* full_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        double x = (double)i;
        ptr_array[i] = x * x * x + 3 * 1.04;
    }
    return ptr_array;
}

int put_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %.2f\n", i, ptr_array[i]);
    }
}

double min_i(double* array, int size) {
    double minimal = array[0];
    double min_i = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] < minimal) {
            minimal = array[i];
            min_i = i;
        }
    }

    return min_i;
}

int d_array(double* d_array, double* a_array, int size_a, double* b_array, int size_b) {
    
    int min_index_a = min_i(a_array, size_a);

    for (int i = 0; i < min_index_a; i++) {
        d_array[i] = a_array[i];
    }

    double minimal_b = b_array[0];
    double maximum_b = b_array[0];

    for (int i = 1; i < size_b; i++) {
        if (b_array[i] < minimal_b) {
            maximum_b = b_array[i];
        }
        if (b_array[i] > maximum_b) {
            maximum_b = b_array[i];
        }
    }

    int j = min_index_a;
    for (int i = 0; i < size_b; i++) {
        if (b_array[i] != minimal_b && b_array[i] != maximum_b) {
            d_array[j++] = b_array[i];
        }
    }

    while (j < (size_a + size_b - 2)) {
        d_array[j++] = 0.5;
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    dz();
    return 0;
}
