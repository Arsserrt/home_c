/*
 * одинаковые цифры вообще
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, box, a=0, b=0;
    scanf("%d",&input);
    b = input*10; //защита от первого 0
	for (int i=0; input>0; i++)
	{
		a = input%10;
		input /= 10;
		box = input; 
		for (int j=0; box>0; j++)
		{
			b = box%10;
			if (a == b)
			{
				printf("YES");
				goto end;	
			}	
			box /= 10;
		}
	}
	printf("NO");
	end:
	return 0;
}
