/*// Обработка нажатия клавишы BACKSPACE

#include <curses.h>
#include <locale.h>

int main() {
	setlocale( LC_ALL,"" );
	initscr();
	char symbol;
	char button;
	printw("Введите букву:");
	scanw("%c", &symbol);
	button = getch();
	if (button == KEY_BACKSPACE) {
		delch();
	}
return 0;
}

// Гришина версия*/

#include <curses.h>
#include <locale.h>
#include <unistd.h>

int main() 
{
	setlocale( LC_ALL,"" );
	initscr();
	char symbol = '\177';
	char button;
	char a;
	while (symbol !='\n') {
        if (symbol == '\177') {
			printw("Введите букву: ");
            noecho();
            delch();
        }
        else
            printw("Введите букву: %c", symbol);
        cbreak();
        noecho();
        symbol = getch();
        clear();
    }
    endwin();
    return 0;
}
