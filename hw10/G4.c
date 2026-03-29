/*
	G4-Совпадения букв
 */


#include <stdio.h>
#include <string.h>

#define N 100

int main()
{
	FILE *f;
    char word1[N], word2[N];
    int numChars[26] = {0};
	f = fopen("input.txt","r"); 
	if (fscanf(f, "%100s %100s", word1, word2) == 2) 
	{
		printf("%s\n", word1);
		printf("%s\n", word2);
	}
	fclose(f); 
//close in
	
	for (int i = 0; i < strlen(word1); i++)
	{
		for (int j = 0; j < strlen(word2); j++)
		{
			if (word1[i] == word2[j])
			{
				numChars[(int)word1[i]-0x61]++;
				//~ printf("%c %d %d\n",word1[i],word1[i]-0x61, numChars[word1[i]-0x61]);
			}
		}
	}
	//~ for (int i = 0; i < 26; i++)
	//~ {
		//~ printf("%d %c\n",numChars[i],i+0x61);
	//~ }
	
//open out
	f = fopen("output.txt","w");
	for (int i = 0; i < 26; i++)
	{
		if(numChars[i] == 1)
			fprintf(f,"%c ",i+0x61);
	}
	fclose(f);
	return 0;
}

