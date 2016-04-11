#include <stdio.h>

int main()
{
	FILE * data;
	data = fopen("dic.txt", "r");
	char n;
	for (int i = 0; i < 4; i++)
        fscanf(data, "%s\n", &n);
	fclose(data);
	return 0;
}
