/*
 * НОД
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d%d",&a,&b);
	while (a != b)
	{
		if (a > b) 
			a = a - b;
		else
			b = b - a;
	} 
	printf("%d",a);
	return 0;
}
