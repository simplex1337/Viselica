//реализована функция выбора рандомного слова из словаря по трем темам
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

extern char word[];

void random_word(unsigned int choice)
{
    FILE *data = fopen("dict.txt", "r");
	int min, max, i; // tema - номер темы, принимает значения 0, 1, 2
	if (choice == 0) { // животные
		min = 0;
		max = 80;
	}
	if (choice == 1) { // птицы
		min = 81;
		max = 157;
	}
	if (choice == 2) { // профессии
		min = 158;
		max = 299;
	}
	if (choice == 3) { // Марки машин
		min = 300;
		max = 349;
	}
	if (choice == 4) { // Сладости
		min = 350;
		max = 408;
	}
	srand(time(NULL));
	int num = rand() / (RAND_MAX + 1.0) * (max - min) + min;
    for(i = 0;  i < num; i++)
		fscanf(data, "%s\n", word);
	fclose(data);
}
