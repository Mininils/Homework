#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define ROW 9
#define COL 
    
#define ROWK 5
#define COLK 5
int task1_2()
{
//int x = 9;
int row, col;
printf("\n");
for (row = 1; row <= ROW; ++row)

{
    for (col = 1; col <= row; col++)
        printf("%5d", col * row);
        printf("\n");
        //x = x - 1;
        }
    system("pause");
}

int task1_3()
{
        int row, col;
        int x = 10;
        printf("\n");
        for (row = 1; row <= ROWK; row++)
        {
            for (col = 1; col <= row; col++)
                printf("%3d", x);
                printf("\n");
                x += 10;
        }
        system("pause");
}

int task2()
{
    int a, b;
    int c = 0;
    int x = 1;
    int predposl = 0;
    int vtor = 0;
    printf("¬ведите число с минимальным количеством цифр - 4\n");
    scanf("%d", &a);
    /*while (a > 0) {
        a /= 10;
        c++;
    }*/
    
    while (a > 0){
        b = a % 10;
        
        if (x == 2) {
        predposl = b;
    }
        a /= 10;
        if (a/10 == 0) {
        vtor = b;
        break;
    }
        x += 1;
        
    } 
      
    printf("%d", vtor * predposl);
}

int main()
{
    setlocale(LC_ALL, "rus");
    //task1_2();
    //task1_3();
    task2();
}