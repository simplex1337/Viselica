#include <stdio.h>

int main()
{
	FILE * data; 
	data = fopen("dic.txt", "r");
	int k = 1;
	int i, j;
	char n[10];
	while( !feof(data) )  
		fscanf(data, "%s", &n ); 
	fclose(data);
	printf("%s\n", n);
	return 0;
}
