// Обработка нажатия клавишы BACKSPACE

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

// Гришина версия

#include <curses.h>
#include <locale.h>

int main() {
	setlocale( LC_ALL,"" );
	initscr();
	char symbol;
	char button;
	char a;
	while (symbol !='\n') {
	mvwprintw(stdscr, 0, 0, "Введите букву: %с", symbol);
	symbol = getch();
	if (button == KEY_BACKSPACE) {
		symbol = '\0';
	}
	clear();
}
return 0;
}
