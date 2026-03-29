/*
 G1-Три раза
 */


#include <stdio.h>
#include <string.h>

#define N 102

int InputStrFromFile(FILE *f,char str[],int n)
{
	if (fgets(str,n,f)!= NULL)
	{
		//~ printf("%s %ld",str,ftell(f));
		str[strlen(str)-1] = '\0';
	}
	else
	{
		printf("Error reading input");
		return -1;
	}
	return ftell(f)-1;
}

int main()
{
	FILE *f;
	char str[N];
	f = fopen("input.txt","r"); 
	int sizefile = InputStrFromFile(f, str, N);
	fclose(f); 
	f = fopen("output.txt","w");
	fprintf(f,"%s, %s, %s %d",str,str,str,sizefile);
	fclose(f);
	return 0;
}

