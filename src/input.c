#define _XOPEN_SOURCE_EXTENDED
#include "vis.h"		

unsigned char input(int hires) 
{
	char symbol, temp;
    int y = 1;
    if (hires)
        y = LINES / 2 - 2;
	raw();
	noecho();
	while (symbol !='\n') {
        if (symbol == 27)
            return 27;
     	if (symbol == '\177') {
		mvwprintw(stdscr, y, 0,("Введите букву: "));
		delch();
	    }
	    if (symbol < 'A' || symbol > 'z') {
        	mvwprintw(stdscr, y, 0,("Введите букву: "));
		}
	    else {
        	mvwprintw(stdscr, y, 0,("Введите букву: "));
           	attron(A_BOLD);
	    	printw("%c", symbol);
		    attroff(A_BOLD);
    	}
        temp = symbol;
	    refresh();
	    symbol = getch();
    }
    return temp;
}
