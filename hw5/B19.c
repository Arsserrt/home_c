/*
 * сумма цифр 10?
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,i,sum=0;
    scanf("%d",&a);
	for (i=0; a>0; i++)
	{
		sum += a%10;
		a /= 10;
	}
	if (sum == 10)
		printf("YES");
	else 
		printf("NO");
	return 0;
}
