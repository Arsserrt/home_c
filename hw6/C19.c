/*
  сколько цифр
 */
 
#include <stdio.h>

int digit_to_num(char c)
{
	return (c >= '0' && c <= '9') ? c-0x30 : 0;
}

int main()
{
	char str[1000];
	int summ=0;
    scanf("%[^\n]", str);
	for (int i = 0; str[i] != '.'; i++) 
	{
		summ += digit_to_num(str[i]);
	}
	printf("%d",summ);
	return 0;
}
