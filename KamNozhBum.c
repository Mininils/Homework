#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#define XMAX 2
#define RAND_MAX 10

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));

    const char* options[] = {"������", "�������", "������"};
    int userChoice, computerChoice;
    char continueGame;

    do {
        printf("\n��������:\n");
        printf("0 - ������\n");
        printf("1 - �������\n");
        printf("2 - ������\n");
        printf("��� �����: ");

        scanf("%d", &userChoice);

        if (userChoice < 0 || userChoice > 2) {
            printf("\n������������ �����! ����������, �������� 0, 1 ��� 2.\n");
            continue;
        }

        computerChoice = rand() % 3;

        printf("\n��������� ������: %s\n", options[computerChoice]);

        if (userChoice == computerChoice) {
            printf("\n�����! ���������� �����.\n");
        }
        else if ((userChoice == 0 && computerChoice == 1) ||
            (userChoice == 1 && computerChoice == 2) ||
            (userChoice == 2 && computerChoice == 0)) {
            printf("\n�� ��������!\n");
        }
        else {
            printf("\n�� ���������! ���������� �����.\n");
        }

        printf("\n������ ���������� ����? (y - �� / n - ���): ");
        scanf(" %c", &continueGame);

    } while (continueGame == 'y');

    printf("\n������� �� ����!\n");
    return 0;
}