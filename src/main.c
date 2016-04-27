#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
#include <locale.h>

void risunok(int life);

void game()
{
    int life = 10;
    char a;
    clear();
    //здесь получаем слово и тему
    printw("Загаданная тема: чото.\n"); //написать по центру
    refresh();
    sleep(1);
    printw("Нажмите клавишу для начала...");
    getch();
    while (life > 0 && a != 'q') {
        clear();
        //обработчик от Мариши
        printw("Ваше слово сейчас: ***\n");
        //обработчик с клавы от Ксюн
        printw("Введите букву: \n");
        printw("Жизней: %d\n", life);
        //move(mvwprintf(stdscr, getmaxy(stdscr) - 16, getmaxx(stdscr) - 35, "%s", );
        risunok(life);
        mvwscanw(stdscr, 1, 15, "%c", &a);
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
    mvwprintw(stdscr, 1, getmaxx(stdscr) / 2 - 5, "Добро пожаловать в\n");
    while (a != 'q' && a != 'Q') {
        attron(A_BOLD);
        mvwprintw(stdscr, getmaxy(stdscr) / 2, getmaxx(stdscr) / 2, "HANGMAN\n");
        attroff(A_BOLD);
        attron(A_REVERSE);
        mvwprintw(stdscr, getmaxy(stdscr) - 1, 0, "Нажмите ENTER для начала, U для обучения, Q для выхода.");
        attroff(A_REVERSE);
        cbreak();
        a = getch();
        if (a == '\n') {
            game();
        }
        clear();
        refresh();
    }
    endwin();
    printf("Bye - bye!\n");
    return 0;
}
    
