#include <stdio.h>
#include <locale.h>
#define N 3
#define P 10
#define K 100
int task1()
{
	float A[N];
    float temp, sum = 0;
    float B[N];
    for (int i = 0; i < N; i++){
        printf("a[%d] = ", i);
        scanf("%f", &temp);
        A[i] = temp;
        B[i] = temp - P;
        sum += A[i];
    }
    printf("\n| индекс | исходное значение | новое значение");
    for (int i = 0; i < N; i++) {
        printf("\n  %d\t\t%.2f\t\t   %.2f", i, A[i], B[i]);
    }
    printf("\nСреднее арифметическое массива = %.2f", sum / N);
}
int task2()
{
    float step, y;
    float sump = 0;
    float sumotr = 0;
    int p = 0;
    int otr = 0;
    float A[K];
    float temp, sum = 0;
    puts("Введите число");
    scanf("%f", &step);
    int index = 0;
    for (float x = 0.15; x <= 2.1; x += step) {
        if (index >= K) {
            break;
        }
        A[index] = (x - 3 * pow(cos(1.04 * x), 2));
        if (A[index] > 0) {
            sump += A[index];
            p++;
        }
        else{
            sumotr += A[index];
            otr++;
        }
        index++;
    }
    float srar = sump / p;
    printf("Имя масива: A \nНакопленное значение для положительных элементов: %.2f \nНакопленное значение для отрицательных элементов: %.2f \nПоложительных элементов: %d \nОтрицательных эллементов: %d \nСреднее значение всех положительных элементов массива: %.2f", sump, sumotr, p, otr, srar);  
}
#define W 3
int dz() {

    int A[W];
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < W; i++) {
        printf("Введите элемент массива\n");
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < W; i++) {
        if (A[i] != 0) {
            sum += A[i];
            cnt++;
        }
    }
    if (cnt > 0) {
        float average = (float)sum / cnt;
        printf("Среднее арифметическое ненулевых элементов: %.2f\n", average);
    }
    else {
        printf("Нет ненулевых элементов для вычисления среднего арифметического.\n");
    }
}

int main()
{
	setlocale(LC_ALL, "rus");
    //task1();
    //task2();
    dz();
}