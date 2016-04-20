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
