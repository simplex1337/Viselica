#include <stdio.h>

int main()
{
	FILE *data = fopen("dic.txt", "r");
	char *n;
	int num;
	scanf("%d", &num);
	int i;
	for(i = 0;  i < num; i++) {
		fscanf(data, "%s\n", n);
	}
	fscanf(data, "%s\n", n);
	printf("%s\n", n); 
	fclose(data);
	return 0;
}
