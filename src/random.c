#include <stdio.h>

int main()
{
	FILE * data; 
	data = fopen("dic.txt", "r");
	int k = 1;
	int i, j;
	char n[10];
	//for (int i = 0; i < 4; i++)
	fscanf(data, "%s\n", &n);	
	for (i = 0; !feof(data) != 1; i++)
		fscanf(data, "%s\n", &n);
	fclose(data);
	printf("%d\n", j);
	//printf("%s\n", n);
	return 0;
}
