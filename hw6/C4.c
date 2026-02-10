/*
 * функция
 */
 
#include <stdio.h>
#include <stdlib.h>

int function(int x)
{
	if (x < -2)
		return 4;
	else if (x >=2)
		return x*x+4*x+5;
	else
		return x*x;
}

int main()
{
	int x, rezult=0;
	do  
	{
		scanf("%d",&x);
		if (function(x) > rezult) 
			rezult = function(x);
	} while (x != 0);
	printf("%d",rezult);
	return 0;
}
