#include <stdio.h>
#include <locale.h>
char c = '!';
int i = 2;
float f = 3.14f;
double d = 5e-12;
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("%c %d %g %lg", c, i, f, d);
	puts("\n1������� ������");
	scanf("%c", &c);
	puts("\n������� �����");
	scanf("%d", &i);
	puts("\n������� �������");
	scanf("%f", &f);
	int integer_f = f;
	puts("\n������� ����������������");
	scanf("%lg", &d);
	printf("\n1A) ����� ����� ����� %.f, ������� ����� ����� %d", f, f - integer_f);
	printf("\n1�) �������. %i ���������. %x", i, i);
	printf("\n1�) �������. %i ���������. %x", i, i);


}