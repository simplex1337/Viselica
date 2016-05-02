#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
#include <locale.h>
#include <string.h>

char word[20];
void risunok(int life);
void random_word(unsigned int choice);
const char themes[3][18] = {
    "Животные", 
    "Спорт",
    "Растения"
};

void game()
{
    unsigned int choice = 0;
    int life = 12, flg = 0;
    char a;
    clear();
    keypad(stdscr, true);
    curs_set(0); 
    while (!flg) {
        unsigned i;
        clear();
        printw("Выберите тему:\n");
        for (i = 0; i < 3; i++) {
            if ( i == choice )
                addch('>');
            else          
                addch(' ');
            printw("%s\n", themes[i]);
        }
        switch (getch()) {
            case KEY_UP:
                if (choice)
                    choice--; 
            break;
            case KEY_DOWN:
                if (choice != 2)
                    choice++;
            break;
            case '\n':
                flg++;
            break;
        }
    }
    random_word(choice);
    printw("%s\n", word);
    printw("Нажмите клавишу для начала...");
    getch();
    while (life > 0 && a != 'q') {
        clear();
        //обработчик от Мариши
        printw("Ваше слово сейчас: ***\n");
        //обработчик с клавы от Ксюн
        printw("Введите букву: \n");
        printw("Жизней: %d\n", life);
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
        WINDOW *welc = subwin(stdscr, 6, 64, (LINES - 6) / 2, (COLS - 64) / 2);
        wprintw(welc, 
        "██╗  ██╗ █████╗ ███╗   ██╗ ██████╗ ███╗   ███╗ █████╗ ███╗   ██╗"
        "██║  ██║██╔══██╗████╗  ██║██╔════╝ ████╗ ████║██╔══██╗████╗  ██║"
        "███████║███████║██╔██╗ ██║██║  ███╗██╔████╔██║███████║██╔██╗ ██║"
        "██╔══██║██╔══██║██║╚██╗██║██║   ██║██║╚██╔╝██║██╔══██║██║╚██╗██║"
        "██║  ██║██║  ██║██║ ╚████║╚██████╔╝██║ ╚═╝ ██║██║  ██║██║ ╚████║"
        "╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝");
        refresh();
        delwin(welc);
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
    
