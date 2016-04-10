#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
#include <locale.h>

void game()
{
    clear();
    //здесь получаем слово и тему
    printw("Загаданная тема: хуй.\n"); //написать по центру
    refresh();
    sleep(5);
    clear();
    //обработчик от Мариши
    printw("Ваше слово сейчас: ***\n");
    printw("Ваша виселица (ещё 228 попыток)\n");
    printw("%s", risunok(life));
}

int main()
{
    setlocale( LC_ALL,"" );
    initscr();
    char a;
    while (a != 'q' && a != 'Q') {
        clear();
        printw("Добро пожаловать в\n");
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
    