//реализована функция выбора рандомного слова из словаря по трем темам
#include "vis.h"

int random_word(char word[], unsigned int choice)
{
    FILE *data = fopen("dic.txt", "r");
    if (data == NULL) {
        fprintf(stderr, "Нету словаря dic.txt. Проверьте его наличие\n");
        return 41;
    }
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
	int num = rand() / (RAND_MAX + 1.0) * (max - min) + min;
    for(i = 0;  i < num; i++)
		fscanf(data, "%s\n", word);
	fclose(data);
    return 40;
}
