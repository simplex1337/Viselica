#include <stdio.h>

int main()
{
	FILE * data; 
	data = fopen("2.txt", "r");
	char n[4];
	//for (int i = 0; i < 4; i++)
		fscanf(data, "%s\n", &n);
	fclose(data);
    printf("%s\n", n);
	return 0;
}
