/*
 * сколько четных? 
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input = 1;
	int even = 0;
	while (input!=0)
	{
		if (input%2 == 0) even++;
		scanf("%d",&input);
	} 
	printf("%d",even);
	return 0;
}
