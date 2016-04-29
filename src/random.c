#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getrand(int min, int max);

int main()
{
	FILE *data = fopen("dic.txt", "r");
	char *n;
	time_t t;
	int num, min, max, tema;
	srand((unsigned) time(&t));
	scanf("%d", &tema);
	//scanf("%d %d'", &min, &max);
	if (tema == 1) {
		min = 0;
		max = 25;
	}
		if (tema == 2) {
		min = 26;
		max = 48;
	}
		if (tema == 3) {
		min = 49;
		max = 73;
	}
	num = getrand(min, max);
	int i;
	for(i = 0;  i < num; i++) {
		fscanf(data, "%s\n", n);
	}
	fscanf(data, "%s\n", n);
	printf("%s\n", n); 
	fclose(data);
	return 0;
}

int getrand(int min, int max)
{
	srand(rand() + clock());
	return (double)rand() / (RAND_MAX + 1.0) * (max - min) + min;
}
