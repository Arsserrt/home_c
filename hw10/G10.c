/*
	G10-Самое длинное слово
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 1000

int main()
{
	FILE *f;
    char strMax[N], str[N];
	f = fopen("input.txt","r");
	fscanf(f, "%s",strMax);
	for (int i = 0; i < N; i++) 
    {
		fscanf(f, "%s",str);
		if (strlen(strMax) < strlen(str))
			strcpy(strMax, str);
	}
	//~ printf("%s\n", strMax);
	fclose(f); 
	
// close in, open out
	f = fopen("output.txt","w");
	fprintf(f,"%s\n", strMax);
	fclose(f);
	return 0;
}
