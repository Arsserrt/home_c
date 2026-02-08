/*
 * сумма квадратов
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,sum=0;
    scanf("%d%d",&a,&b);
	if (a>b || abs(a)>100 || abs(b)>100)
		goto end;
	for (int i=a; i<=b; i++)
		sum += i*i;
	printf("%d ",sum);	
	end:
	return 0;
}
