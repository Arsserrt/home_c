/*
 * не 0 
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input = 1;
	int i=0;
	//for (; input>0;)
	while (input!=0)
	{
		scanf("%d",&input);
		if (input!=0) i++;
	} 
	printf("%d",i);
	return 0;
}
