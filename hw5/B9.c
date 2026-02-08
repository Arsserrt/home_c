/*
 * все цифры четные?
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
		if (a%2 != 0) 
		{
			printf("NO");
			goto end;
		}
	}
	printf("YES");
	end:
	return 0;
}
