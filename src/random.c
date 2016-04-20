#include <stdio.h>

int main()
{
	FILE * data; 
	data = fopen("dic.txt", "r");
	int k = 1;
	int i;
	char n[10];
	//for (int i = 0; i < 4; i++)
	fscanf(data, "%s\n", &n);
	for (i = 6; i < 8; i++)
		printf("%s\n", n[i]);
	fclose(data);
	//printf("%s\n", n);
	return 0;
}
