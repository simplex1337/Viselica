#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
#include <locale.h>

void risunok(int life);

void game()
{
    int life = 6;
    char a;
    clear();
    //здесь получаем слово и тему
    printw("Загаданная тема: хуй.\n"); //написать по центру
    refresh();
    while (life > 0 && a != 'q') {
        sleep(5);
        clear();
        //обработчик от Мариши
        printw("Ваше слово сейчас: ***\n");
        //обработчик с клавы от Ксюни
        printw("Введите букву: \n");
        printw("Ваша виселица (ещё %d попыток)\n", life);
        risunok(life);
        a = getch();
        life--;
    }
}

int main()
{
    setlocale( LC_ALL,"" );
    initscr();
    char a;
    clear();
    refresh();
    printw("Добро пожаловать в\n");
    while (a != 'q' && a != 'Q') {
        printw("HANGMAN!\n");
        printw("Нажмите ENTER для начала, U для обучения, Q для выхода.\n");
        cbreak();
        a = getch();
        if (a == '\n') {
            game();
        }
    }
    endwin();
    return 0;
}
    