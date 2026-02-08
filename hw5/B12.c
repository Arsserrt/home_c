/*
 * min and max
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, a=0, min=9, max=0;
    scanf("%d",&input);
	for (int i=0; input>0; i++)
	{
		a = input%10;
		if (a < min) min = a;
		if (a > max) max = a;
		input /= 10;
	}
	printf("%d %d",min, max);
	return 0;
}
