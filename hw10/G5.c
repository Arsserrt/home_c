/*
	G5-Заменить a на b
 */


#include <stdio.h>
#include <string.h>

#define N 1001

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
	//~ printf("%s\n",str);
	fclose(f); 
	
	//close in, open out
	f = fopen("output.txt","w");
	for (int i = 0; i < sizefile; i++)
	{
		if(str[i] == 'a')
		{
			str[i] = 'b';
			continue; 
		}
		if(str[i] == 'A')
		{
			str[i] = 'B';
			continue; 
		}
		if(str[i] == 'b')
			str[i] = 'a';
		if(str[i] == 'B')
			str[i] = 'A';
	}
	//~ printf("%s",str);
	fprintf(f,"%s",str);
	fclose(f);
	return 0;
}

