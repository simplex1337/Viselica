#define _XOPEN_SOURCE_EXTENDED
#include <curses.h>
#include <locale.h>
#include <unistd.h>
#include <wchar.h>

int main() 
{
    setlocale(LC_ALL, "");
	initscr();
	wchar_t symbol = '\177';
	char button;
	char a;
	while (symbol !='\n') {
        if (symbol == '\177')
			printw("Введите букву: ");
        else {
            printw("Введите букву: ");
            addnwstr(&symbol, 1);
        }
        cbreak();
        noecho();
        get_wch(&symbol);
        clear();
    }
    endwin();
    return 0;
}
