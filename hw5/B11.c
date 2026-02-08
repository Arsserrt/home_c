/*
 * перевернуть число
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, a=0, output=0;
    scanf("%d",&input);
	for (int i=0; input>0; i++)
	{
		output *= 10;
		a = input%10;
		output += a;
		input /= 10;
	}
	printf("%d",output);
	return 0;
}
