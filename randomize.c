#include "BST.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define GAME_OVER 0

//randomizing [min, max), возвращает псевдорандомное число
int getrand(int min, int max)
{
	srand(rand() + clock());
	return (double)rand() / (RAND_MAX + 1.0) * (max - min) + min;
}
//Проверяет остались ли слова в словаре, возвращает сумму всех флагов используемых слов
int LoadFactorCheck(int *used, int max)
{
	int i, summ;
	for (i = 0; i < max; i++)
		summ += used[i];
	return summ;
}
//Инициализация из файла, возвращает инициализированное дерево
struct bstree *InitFromFile(char *filename)
{
	struct bstree *tree;
	int i;
	char *buff;
	buff = (char *) malloc(sizeof(buff) * 100);
	FILE *dict;
	dict = fopen(filename, "r");
	if(!dict) {
		printf("Ошибка: Файл ../%s был удалён или перемещён.", filename);
		exit(EXIT_FAILURE);
	}
	for (i = 0; fgets(buff, 100, dict); i++){
		buff[strlen(buff) - 1] = '\0';
		if (i == 0)
			tree = bstree_create(0, buff);
		bstree_add(tree, i, buff);
	}
	fclose(dict);
	return tree;
}
//Для работы нужен файл со словами, в котором каждое слово с новой строки
int main()
{
	struct bstree *tree, *node;
	tree = InitFromFile("dictional.txt");
    /*
    tree = bstree_create(0, "Язь");
    bstree_add(tree, 1, "Лев");
    bstree_add(tree, 2, "Волк");
    bstree_add(tree, 3, "Козёл");
    bstree_add(tree, 4, "Баран");
    bstree_add(tree, 5, "Дракон");
    bstree_add(tree, 6, "Барибал");*/
	char retry;
	int a, i, *used, game_flag = 1, max = bstree_max(tree)->key;
	used = (int *) calloc(sizeof(used), max + 1);
	for (i = 0; game_flag; i++) {
		a = getrand(0, max + 1);
		if (used[a] > 0){
			if (LoadFactorCheck(used, max + 1) == max + 1) {
				printf("Словарный запас кончился.");
				game_flag = GAME_OVER;
			}
			continue;
		}
		used[a]++;
		node = bstree_lookup(tree, a);
		printf("a(%d): Value = %s\n", a,  node->value);
	}
	printf("Начать игру заново? (y/n)");
	scanf("%c", &retry);
	if( retry == 'y')//Need reallocate of int *used array
		printf("Здесь типа рекурсивый вызов функции игры");
	return 0;
}
