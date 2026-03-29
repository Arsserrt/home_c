/*
	G7-Количество букв
 */


#include <stdio.h>
#include <string.h>

#define N 10000

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
	int sizefile = InputStrFromFile(f, str, N+2);
	fclose(f); 
	
// close in, open out
	f = fopen("output.txt","w");
	int A = 0, b = 0;
	for (int i = 0; i < sizefile; i++)
	{
		if (str[i]>='A' && str[i] <='Z')
			A++;
		if (str[i]>='a' && str[i] <='z')
			b++;
	}
	fprintf(f,"%d %d",b,A);
	fclose(f);
	return 0;
}

