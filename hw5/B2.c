/*
 * квадраты от А до В
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
    scanf("%d%d",&a,&b);
	if (a>b || abs(a)>100 || abs(b)>100)
		goto end;
	for (int i=a; i<=b; i++)
		printf("%d ",i*i);	
	end:
	return 0;
}
