#include "vis.h"

char word[20];
const char themes[6][43] = {
    "Животные",
    "Птицы",
    "Профессии",
    "Марки автомобилей",
    "Сладости"
};

void game()
{
    unsigned int choice = 0;
    int hires = 0, y = 0, i, life = 13, flg = 0, donth = 0;
    char guess;
    char cens[20] = { '\0' };
    char alph[25] = { '\0' };
    clear();
    keypad(stdscr, true);
    curs_set(0);
    while (!flg) {
        unsigned i;
        clear();
        printw("Выберите тему:\n");
        for (i = 0; i < 5; i++) {
            if (i == choice)
                addch('>');
            else
                addch(' ');
            printw("%s\n", themes[i]);
        }
        attron(A_REVERSE);
        mvwprintw(stdscr, getmaxy(stdscr) - 1, 0,
                  "Нажмите ENTER для подтверждения, стрелки вверх/вниз для выбора");
        attroff(A_REVERSE);
        switch (getch()) {
            case KEY_UP:
                if (choice)
                    choice--;
                break;
            case KEY_DOWN:
                if (choice != 4)
                    choice++;
                break;
            case '\n':
                flg++;
                break;
        }
    }
    random_word(word, choice);
    while (strcmp(cens, word) && life > 0 && guess != 27) {
        if (getmaxx(stdscr) >= 130 && getmaxy(stdscr) >= 40) {
            hires = 1;
            y = LINES / 2 - 3;
        } else {
            hires = 0;
            y = 0;
        }
        clear();
        life = asteriks(word, cens, guess, life, donth);        //обработчик от Мариши
        mvprintw(y, 0, "Выбранная тема: %s\n", themes[choice]);
        mvprintw(y + 1, 0, "Ваше слово сейчас: %s\n", cens);
        jizi(life, hires);      //жизни от Дани
        attron(A_REVERSE);
        mvwprintw(stdscr, getmaxy(stdscr) - 1, 0,
                  "Нажмите ENTER для подтверждения, ESC для выхода");
        attroff(A_REVERSE);
        if (hires)
            risunok_hd(life + 1);   //рисунок от Дани
        else
            risunok(life + 1);      //рисунок от Дани
        guess = input(hires);   //ввод от Ксюни
        donth = check(guess, alph);
    }
    clear();
    printw("Загаданное слово было: %s\n", word);
    printw("Осталось жизней: %d\n", life);
    if ((life > 0) && (guess != 27)) 
        win();
    else
        lose();
    attron(A_REVERSE);
    mvwprintw(stdscr, getmaxy(stdscr) - 1, 0,
              "Нажмите любую клавишу для продолжения");
    attroff(A_REVERSE);
    cbreak();
    getch();
    clear();
    return;
}

int main()
{
    set_escdelay(0);
    setlocale(LC_ALL, "");
    initscr();
    char a;
    mvwprintw(stdscr, 1, (getmaxx(stdscr) - 18) / 2,
              "Добро пожаловать в\n");
    while (a != 'q' && a != 'Q' && a != 27) {
        hangman();
        keypad(stdscr, true);
        attron(A_REVERSE);
        mvwprintw(stdscr, getmaxy(stdscr) - 1, 0,
                  "Нажмите ENTER для начала, Q или ESC для выхода");
        attroff(A_REVERSE);
        cbreak();
        refresh();
        a = getch();
        if (a == '\n') {
            game();
        }
        clear();
    }
    keypad(stdscr, false);
    endwin();
    printf("Bye - bye!\n");
    return 0;
}
