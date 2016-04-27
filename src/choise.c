#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <locale.h>

#define MAX_LENGHT_OF_WORD 50

char game[MAX_LENGHT_OF_WORD];

void PrintGame(int **pos, int idx)
{
	int i;
	for (i = 0; pos[idx][i] != -1; i++)
		game[pos[idx][i]] = (char) idx;
	
}

int main()
{
	char *word = (char *)malloc(MAX_LENGHT_OF_WORD);
	word = strcpy(word, "google");
	//scanf("%s\n", word);
//	char *chars = (char *)malloc(MAX_LENGTH_OF_WORD);
//	getChars(word, chars);
	//char *lol = strdup("lolol");
	//char *ch = strchr(lol, lol[1]);
	int i = 0, len = strlen(word), count = 0, j = 0, **pos = (int **)calloc(sizeof(pos), 123);
	for (i = 0; i < len; i++)
		game[i] = '*';
	for (i = 0; i < 123; i++) {
		pos[i] = (int *)calloc(sizeof(pos[i]), len);
		pos[i][0] = -1;
	}
	char ch;
	int chr = 0;
	//'o';
		for (i = 0; i < len; i++) {
			chr = (int) word[i];
			for (j = 0; j < len - 1 && pos[chr][j] != -1; j++);
			pos[chr][j] = i;
			pos[chr][j + 1] = -1;
		}
	for (count = 0; count < 8; i++) {
		scanf("\n%c", &ch);
		chr = (int)ch;
		PrintGame(pos, chr);
		printf("%s ", game);
		count++;
		//printf("\n");
	}
	//scanf("%c", &ch);
	/*
	for (i = 0; i < len - 1; i++) {
		chr = (int) word[i];
		pos[chr][0] = i;
		k++;
		for (j = i + 1; j < len; j++) {
			if (word[i] == word[j]) {
				chr = (int) word[i];
				pos[chr][k] = j;
				k++;
				pos[chr][k] = -1; //end of position list
			}
		}
		k = 0;
	}*/
	
	/*
	for (i = 0; i < 6; i++)
		printf("%d", pos[chr][i]);//lol[3]);*/
	return 0;
}
