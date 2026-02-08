/*
 * Фибоначчиле (списано с презентации)
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, f1=1, f2=1, box;
	scanf("%d", &n);
	if (n == 1)
	printf("1");
	else
	{	
		if (n != 0) printf("1 1 ");
		for (i = 2; i < n; ++i)
		{
			box = f1 + f2;
			f1 = f2;
			f2 = box;
			printf("%d ", f2);
		}
	}	
	return 0;
}
