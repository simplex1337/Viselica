#define _XOPEN_SOURCE_EXTENDED
#include <curses.h>
#include <locale.h>
#include <unistd.h>
#include <wchar.h>

wchar_t input() 
{
    setlocale(LC_ALL, "");
	wchar_t symbol = '\177';
	while (symbol !='\n') {
        if (symbol == '\177')
			mvwprintw(stdscr, 1, 0,("Введите букву: "));
        else {
            mvwprintw(stdscr, 1, 0,("Введите букву: "));
            addnwstr(&symbol, 1);
        }
        cbreak();
        noecho();
        get_wch(&symbol);
    }
    endwin();
    return symbol;
}
