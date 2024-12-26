#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#define XMAX 2
#define RAND_MAX 10

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));

    const char* options[] = {"Камень", "Ножницы", "Бумага"};
    int userChoice, computerChoice;
    char continueGame;

    do {
        printf("\nВыберите:\n");
        printf("0 - Камень\n");
        printf("1 - Ножницы\n");
        printf("2 - Бумага\n");
        printf("Ваш выбор: ");

        scanf("%d", &userChoice);

        if (userChoice < 0 || userChoice > 2) {
            printf("\nНекорректный выбор! Пожалуйста, выберите 0, 1 или 2.\n");
            continue;
        }

        computerChoice = rand() % 3;

        printf("\nКомпьютер выбрал: %s\n", options[computerChoice]);

        if (userChoice == computerChoice) {
            printf("\nНичья! Попробуйте снова.\n");
        }
        else if ((userChoice == 0 && computerChoice == 1) ||
            (userChoice == 1 && computerChoice == 2) ||
            (userChoice == 2 && computerChoice == 0)) {
            printf("\nВы выиграли!\n");
        }
        else {
            printf("\nВы проиграли! Попробуйте снова.\n");
        }

        printf("\nХотите продолжить игру? (y - да / n - нет): ");
        scanf(" %c", &continueGame);

    } while (continueGame == 'y');

    printf("\nСпасибо за игру!\n");
    return 0;
}