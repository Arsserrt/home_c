/*
 * простое число?
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
    scanf("%d",&a);
    if (a == 1) 
	{
		printf("NO");
		goto end;
	}
	for (int i=2; i<a; i++)
	{
		if (a%i == 0)
		{
			printf("NO");
			goto end;
		}
	}
	printf("YES");
	end:
	return 0;
}
