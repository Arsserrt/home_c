/*
 * чет - нечет
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, a=0, even=0, odd=0;
    scanf("%d",&input);
	for (int i=0; input>0; i++)
	{
		a = input%10;
		if (a%2 == 0) 
			even++;
		else
			odd++;
		input /= 10;
	}
	printf("%d %d",even, odd);
	return 0;
}
