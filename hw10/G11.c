/*
	G11-Заканчивается на a
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    char str[N];
	f = fopen("input.txt","r");
	InputStrFromFile(f, str, N+2);
	fclose(f); 
	
	int count = 0;      
	int in_word = 0;    
	char last_char = '\0';  

	for (int i = 0; str[i] != '\0'; i++) {
		unsigned char ch = str[i];

		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
			in_word = 1;
			last_char = ch;
		} 
		else {
			if (in_word) {
				if (last_char == 'a' || last_char == 'A') {
					count++;
				}
				in_word = 0;
			}
		}
	}
	if (in_word) {
		if (last_char == 'a' || last_char == 'A') {
			count++;
		}
	}
	//~ printf("%d\n", count);
	
// close in, open out
	f = fopen("output.txt","w");
	fprintf(f,"%d\n", count);
	fclose(f);
	return 0;
}
