/*
	G2-Строка и цифры
 */


#include <stdio.h>
#include <string.h>

 #define N 100

int main()
{
	FILE *f;
	int num;
	f = fopen("input.txt","r"); 
	if (fscanf(f, "%d", &num) == 1) 
	{
		//~ printf("%d\n", num);
    } else 
    {
		printf("Error reading input\n");
    }
	fclose(f); 
	f = fopen("output.txt","w");
	for (int i = 0, j = 0; i < num/2; i++)
	{
		j+=2;
		if (j==10) j=2;
		fprintf(f,"%c%d", 0x41+i, j);
	}
	fclose(f);
	return 0;
}

