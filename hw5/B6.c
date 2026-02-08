/*
 * одинаковые цифры рядом
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, a=0,b=0,i;
    scanf("%d",&input);
    b = input*10; //защита от первого 0
	for (i=0; input>0; i++)
	{
		a = input%10;
		if (a == b)
		{
			printf("YES");
			goto end;
		}
		b = a;
		input /= 10;
	}
	printf("NO");
	end:
	return 0;
}
