#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	/*getchar();
	task1();*/
	getchar();
	task2();
}

int task1()
{
	int num;
	puts("������� ������ �����");
	scanf("%d", &num);
	puts("������� ����� �");
	int nam;
	puts("������� ������ �����");
	scanf("%d", &nam);
	puts("������� ����� �");
	printf("����� ����� %d � %d = %i",num, nam, num + nam );
	printf("\n�������� ����� %d � %d = %i", num, nam, num - nam);
	printf("\n������������ ����� %d � %d = %i",num, nam, num * nam);
	printf("\n������� �� ������� %d �� %d = %i, ������� �� ������� ������� ����� �� ������ = %i", nam, num, nam/num, nam % num);


}
#define D 2.54
#define S 2.32
#define L 2.71
int task2()
{
	int dym;
	float resultD;
	float resultS;
	float resultL;
	puts("������� �������� ��� ��������");
	scanf("%d", &dym);
	resultD = D * dym;
	resultS = S * dym;
	resultL = L * dym;

	printf("%d ������ � ��� %0.2f �� ", dym, resultD);
	printf("\n%d ��������� ������ � ��� %0.2f �� ", dym, resultS);
	printf("\n%d �������������� ������ � ��� %0.2f �� ", dym, resultL);
}
