//реализована функция выбора рандомного слова из словаря по трем темам
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <wchar.h>

int num;
void random_word(unsigned int choice)
{
    FILE *data = fopen("dic.txt", "r");
    extern wchar_t word[];
	int min, max, i; // tema - номер темы, принимает значения 0, 1, 2
	if (choice == 0) { // животные
		min = 0;
		max = 25;
	}
	if (choice == 1) { // виды спорта
		min = 26;
		max = 48;
	}
	if (choice == 2) { // растения
		min = 49;
		max = 73;
	}
	srand(time(NULL));
	num = rand() / (RAND_MAX + 1.0) * (max - min) + min;
    for(i = 0;  i < num; i++)
		fscanf(data, "%s\n", word);
	fscanf(data, "%s\n", word);
	printf("%s\n", word); 
	fclose(data);
}
