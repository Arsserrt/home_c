/*
	G6-Проверка на палиндром
 */


#include <stdio.h>
#include <string.h>

#define N 1000

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

int is_palindrom(char str[], int n)
{
	for (int i = 0, j = n-1; i < n; i++,j--)
	{
		printf(" %c %c", str[i],str[j]);
		if(str[i] != str[j])
			return 0;
	}
	return 1;
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
	if (is_palindrom(str, sizefile))
		fprintf(f,"YES");
	else 
		fprintf(f,"NO");
	//~ fprintf(f,"%s, %s, %s %d",str,str,str,sizefile);
	fclose(f);
	return 0;
}

