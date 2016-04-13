#include <stdio.h>

int main()
{
	FILE * data; 
	data = fopen("dic.txt", "r");
	char n[20];
	for (int i = 0; i < 4; i++)
		fscanf(data, "%s\n", &n);
	fclose(data);
    printf("%s\n", n);
	return 0;
}
