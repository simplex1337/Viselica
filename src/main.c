#include <stdio.h>          //главная функция
#include <stdlib.h>         //объединяет все подфункции
#include <curses.h>         //является так же графической оболочкой
#include <unistd.h>
#include <locale.h>
#include <string.h>
#define WORD_SIZE 20

void jizi(int life);
void risunok1(int life);
void risunok(int life);
void random_word(unsigned int choice);
void risunok1(int life);
int asteriks(char cens[], char guess, int life);
unsigned char input();
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
    int i, life = 13, flg = 0;
    char guess;
    clear();
    keypad(stdscr, true);
    curs_set(0); 
    while (!flg) {
        unsigned i;
        clear();
        printw("Выберите тему:\n");
        for (i = 0; i < 5; i++) {
            if ( i == choice )
                addch('>');
            else          
                addch(' ');
            printw("%s\n", themes[i]);
        }
        attron(A_REVERSE);
        mvwprintw(stdscr, getmaxy(stdscr) - 1, 0, "Нажмите ENTER для подтверждения, стрелки вверх/вниз для выбора");
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
    keypad(stdscr, false);
    random_word(choice);
    char cens[20];
    for (i = 0; i < 20; i++)
        cens[i] = '\0';
    while (strcmp(cens, word) && life > 0 && guess != 'q') {
        clear();
        life = asteriks(cens, guess, life);//обработчик от Мариши
        printw("Ваше слово сейчас: %s\n", cens);
        //mvprintw(2, 0,"Жизней: %d\n", life);
        risunok(life);//рисунок от Дани
	jizi(life);//жизни от Дани
	risunok1(life);	
	attron(A_REVERSE);
        mvwprintw(stdscr, getmaxy(stdscr) - 1, 0, "Нажмите ENTER для подтверждения, Q для выхода");
        attroff(A_REVERSE);
        guess = input();//ввод от Ксюни
    }
    clear();
    printw("Загаданное слово было: %s\n", word); 
	initscr();
	WINDOW *con = subwin(stdscr, 25, 70, 23, 40);
    if ((life > 0) && (guess != 'q')){
        printw("Осталось жизней: %d\n", life);
		jizi(life);  		
			wprintw(con,"██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗██╗███╗   ██╗██╗\n");
			wprintw(con,"╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██║████╗  ██║██║\n");
			wprintw(con," ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║██╔██╗ ██║██║\n");
			wprintw(con,"  ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║██║╚██╗██║╚═╝\n");
			wprintw(con,"   ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝██║██║ ╚████║██╗\n");
			wprintw(con,"   ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝╚═╝\n");  
	}
	else {
		printw("Осталось жизней: %d\n", life);
		wprintw(con," ██╗   ██╗ ██████╗ ██╗   ██╗    ██╗      ██████╗ ███████╗███████╗██╗\n");
		wprintw(con," ╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║     ██╔═══██╗██╔════╝██╔════╝██║\n");
		wprintw(con,"  ╚████╔╝ ██║   ██║██║   ██║    ██║     ██║   ██║███████╗█████╗  ██║\n");
		wprintw(con,"   ╚██╔╝  ██║   ██║██║   ██║    ██║     ██║   ██║╚════██║██╔══╝  ╚═╝\n");
		wprintw(con,"    ██║   ╚██████╔╝╚██████╔╝    ███████╗╚██████╔╝███████║███████╗██╗\n");
		wprintw(con,"    ╚═╝    ╚═════╝  ╚═════╝     ╚══════╝ ╚═════╝ ╚══════╝╚══════╝╚═╝\n");
	}
	delwin(con);
	attron(A_REVERSE);
    mvwprintw(stdscr, getmaxy(stdscr) - 1, 0, "Нажмите ENTER для продолжения");
    attroff(A_REVERSE);
    cbreak();
    getch();
    clear();
    return;
}

int main()
{
    setlocale(LC_ALL,"");
    initscr();
    wchar_t a;
    mvwprintw(stdscr, 1, (getmaxx(stdscr) - 18)/ 2, "Добро пожаловать в\n");
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
        attroff(A_BOLD);
        attron(A_REVERSE);
        mvwprintw(stdscr, getmaxy(stdscr) - 1, 0, "Нажмите ENTER для начала, Q для выхода");
        attroff(A_REVERSE);
        cbreak();
        refresh();
        a = getch();
        if (a == '\n') {
            delwin(welc);
            game();
        }
    }
    endwin();
    printf("Bye - bye!\n");
    return 0;
}
    
