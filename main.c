#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    system("clear");
    printf("Добро пожаловать в\n");
    printf("HANGMAN!\n");
    sleep(2);
    printf("Нажмите клавишу для начала\n");
    getchar();
    system("clear");
    printf("У вас 228 жизней\n");
    printf("Угаданное слово: *****\n");
    printf("Для выхода нажмите q\n\n\n");
    printf("Введите букву: ");
    getchar();
    system("clear");
    printf("У вас 228 жизней\n");
    printf("Угаданное слово: *а**а\n");
    printf("Для выхода нажмите q\n\n\n");
    printf("Введите букву: ");
    getchar();
    system("clear");
    printf("Оп-оп, минус жизнь, не унывать!=)\n");
    printf("У вас 227 жизней\n");
    printf("Угаданное слово: *а**а\n");
    printf("Для выхода нажмите q\n\n\n");
    printf("Введите букву: ");
    getchar();
    system("clear");
    printf("У вас 227 жизней\n");
    printf("Угаданное слово: ка*ка\n");
    printf("Для выхода нажмите q\n\n\n");
    printf("Введите букву: ");
    getchar();
    system("clear");
    printf("У нас игра на русском языке. Так что, минус жизнь.\n");
    printf("У вас 226 жизней\n");
    printf("Угаданное слово: ка*ка\n");
    printf("Для выхода нажмите q\n\n\n");
    printf("Введите букву: ");
    getchar();
    system("clear");
    printf("Было загадано слово каска. Хорошая работа!\n");
    printf("Для продолжения нажмите ентер. Для выхода q");
    getchar();
    return 0;
}
    