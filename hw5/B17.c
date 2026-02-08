/*
 * сумма цифр равна произведению
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, box = 0;
	scanf("%d",&a);
	for (int i=10; i<=a; i++)
	{
		int sum = 0, mult = 1;
		box = i;
		for (int j=0; box>0; j++)
		{
			sum += box%10;
			mult *= box%10;
			box /= 10;
		}
		//printf("%d == %d",sum,mult);
		if (sum == mult) 
			printf("%d ",i);
	} 
	return 0;
}
