//реализована функция выбора рандомного слова из словаря по трем темам

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int num;
int main()
{
	FILE *data = fopen("dic.txt", "r");
    char word[15];
	time_t t;
	int min, max, tema; // tema - номер темы, принимает значения 1, 2, 3
	scanf("%d", &tema); // для теста, убрать при конечной сборке
	//scanf("%d %d'", &min, &max);
	if (tema == 1) { // животные
		min = 0;
		max = 25;
	}
	if (tema == 2) { // виды спорта
		min = 26;
		max = 48;
	}
	if (tema == 3) { // растения
		min = 49;
		max = 73;
	}
	srand(time(NULL));
	num = rand() / (RAND_MAX + 1.0) * (max - min) + min;
	int i;
	for(i = 0;  i < num; i++)
		fscanf(data, "%s\n", word);
	fscanf(data, "%s\n", word);
	printf("%s\n", word); 
	fclose(data);
	return 0;
}
