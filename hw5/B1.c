/*
 * квадраты и кубы
 */
 
#include <stdio.h>

int main()
{
	int a;
    scanf("%d",&a);
	if (a>100)
		goto end;
	for (int i=1; i<=a; i++)
		printf("%d %d %d\n",i,i*i,i*i*i);	
	end:
	return 0;
}
