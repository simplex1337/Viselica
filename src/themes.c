//вывод выбранной темы
#include <stdio.h>
#include <stdlib.h>

extern char tema[];

void theme(unsigned int choice)
{
	if (choice == 0) { // животные
		tema[20] = "Животные";
	}
	if (choice == 1) { // птицы
		tema[20] = "Птицы";
	}
	if (choice == 2) { // профессии
		tema[20] = "Профессии";
	}
	if (choice == 3) { // Марки машин
		tema[20] = "Марки машин";
	}
	if (choice == 4) { // Сладости
		tema[20] = "Сладости";
	}
}
