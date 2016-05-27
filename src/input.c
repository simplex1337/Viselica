#define _XOPEN_SOURCE_EXTENDED
#include "vis.h"			//ввод с клавиатуры символа юникода

unsigned char input() 
{
	char symbol, temp;
	while (symbol !='\n') {
        if (symbol == '\177')
			mvwprintw(stdscr, 1, 0,("Введите букву: "));
        else {
            mvwprintw(stdscr, 1, 0,("Введите букву: "));
            addstr(&symbol);
        }
        if (symbol == 'q')
            return symbol;
        cbreak();
        noecho();
        temp = symbol;
        symbol = getch();
    }
    return temp;
}
