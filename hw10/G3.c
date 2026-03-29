/*
	G3-Последний символ - номера
 */


#include <stdio.h>
#include <string.h>

#define N 1000

int main()
{
	FILE *f;
	f = fopen("input.txt","r"); 
    char str[N+1];
    fgets(str,N,f);
    str[strlen(str)-1] = '\0';
    //~ printf("%s",str);    
    //~ fseek(f, -3, SEEK_END);
    fseek(f, -2, SEEK_END);
    int last_char = fgetc(f);
    //~ printf("%c",last_char);
	fclose(f);
//close in, open nout
	f = fopen("output.txt","w");
	for (int i = 0; i < (strlen(str)-1); i++)
	{
		if (str[i] == last_char)
			fprintf(f,"%d ",i);
	}
	fclose(f);	
	return 0;
}

