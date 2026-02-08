/*
 * все цифры в порядке возрастания?
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, a=0;
    scanf("%d",&input);
	for (int i=0; input>0; i++)
	{
		a = input%10;
		input /= 10;
		if (input%10 >= a) 
		{
			printf("NO");
			goto end;
		}
	}
	printf("YES");
	end:
	return 0;
}
