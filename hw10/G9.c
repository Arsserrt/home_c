/*
	G9-Удалить повторяющиеся символы
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

int main()
{
	FILE *f;
	char str[N+2];
	f = fopen("input.txt","r"); 
	int sizefile = InputStrFromFile(f, str, N+2);
	fclose(f); 
// close in

	char result[sizefile];
	int seen[256] = {0};
	int j = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        unsigned char ch = str[i];
        if (ch == ' ') {
            continue;
        }
        if (seen[ch] == 0) {
            seen[ch] = 1;           
            result[j++] = ch;      
        }
    }
    result[j] = '\0';  // Завершающий ноль
    
	//~ printf("%s\n", str);
    //~ printf("%s\n", result);
    
// open out
	f = fopen("output.txt","w");
	fprintf(f,"%s",result);
	fclose(f);
	return 0;
}

