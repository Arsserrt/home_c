/*
 * строка без капслока
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[1000];
    scanf("%[^\n]", str);
	for (int i = 0; (str[i] != '\n') && (str[i] != '.'); i++) 
	{
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;
        }
	}
	int i = 0;
	for (; str[i] != '.'; i++)
	{		
	}
	str[i] = 0;
    printf("%s",str);
	return 0;
}
