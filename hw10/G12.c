/*
	G12-Разобрать на слова
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
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
    char str[N] = {0};
	f = fopen("input.txt","r");
	int size = InputStrFromFile(f, str, N+2)+1;
	fclose(f); 
	
// close in, open out
	f = fopen("output.txt","w");
	
	char word[size];
	int j = 0;
	int word_count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		unsigned char ch = str[i];
		if (isalnum(ch) || (ch >= 128)) {  
			if (j < size - 1) {
				word[j++] = ch;
			}
		} 
		else {
			if (j > 0) {
				word[j] = '\0';
				fprintf(f, "%s\n", word);
				word_count++;
				j = 0;
			}
		}
	}

	if (j > 0) {
		word[j] = '\0';
		fprintf(f, "%s\n", word);
		word_count++;
	}

	fclose(f);
	return 0;
}
