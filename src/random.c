#include <stdio.h>

int main()
{
	FILE * data; 
	data = fopen("2.txt", "r");
	char n[3];
	//for (int i = 0; i < 4; i++)
		fscanf(data, "%s\n", &n[3]);
	fclose(data);
    printf("%s\n", n);
	return 0;
}
