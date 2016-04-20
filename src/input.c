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

int main() {
	setlocale( LC_ALL,"" );
	initscr();
	char symbol = 'a';
	char button;
	char a;
	while (symbol !='\n') {
	mvwprintw(stdscr, 0, 0, "Введите букву: %c", symbol);
    cbreak();
	symbol = getch();
	if (button == KEY_BACKSPACE) {
		symbol = '\t';
	}
	clear();
    endwin();
}
return 0;
}
