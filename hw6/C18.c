/*
  сколько цифр
 */
 
#include <stdio.h>

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int main()
{
	char str[1000];
	int summ=0;
    scanf("%[^\n]", str);
	for (int i = 0; str[i] != '.'; i++) 
	{
		if (is_digit(str[i])) 
			summ++;
	}
	printf("%d",summ);
	return 0;
}

