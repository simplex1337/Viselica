#define _XOPEN_SOURCE_EXTENDED
#include "vis.h"		

unsigned char input() 
{
	char symbol, temp;
	raw();
	noecho();
	while (symbol !='\n') {
        if (symbol == 27)
            return 27;
     	if (symbol == '\177') {
		mvwprintw(stdscr, 1, 0,("Введите букву: "));
		delch();
	    }
	    if (symbol < 'A' || symbol > 'z') {
        	mvwprintw(stdscr, 1, 0,("Введите букву: "));
		}
	    else {
        	mvwprintw(stdscr, 1, 0,("Введите букву: "));
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
