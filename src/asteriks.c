#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LENGHT_OF_WORD 50

char game[MAX_LENGHT_OF_WORD];
void PrintGame(int **pos, int idx)
{
	int i;
	for (i = 0; pos[idx][i] != -1; i++)
		game[pos[idx][i]] = (char) idx;
	
}

char asteriks(char a, char *word)
{
	int i = 0, len = strlen(word), count = 0, j = 0, **pos = (int **)calloc(sizeof(pos), 123);
	for (i = 0; i < len; i++)
		game[i] = '*';
	for (i = 0; i < 123; i++) {
		pos[i] = (int *)calloc(sizeof(pos[i]), len);
		pos[i][0] = -1;
	}
	char ch;
	char chr = 0;
    for (i = 0; i < len; i++) {
        chr = word[i];
        for (j = 0; j < len - 1 && pos[chr][j] != -1; j++);
        pos[chr][j] = i;
        pos[chr][j + 1] = -1;
    }
	return game;
}
