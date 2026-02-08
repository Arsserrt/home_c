/*
 * три цифры?
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,i;
    scanf("%d",&a);
	for (i=0; a>0; i++)
	{
		a /= 10;
	}
	if (i == 3)
		printf("YES");
	else 
		printf("NO");	
	return 0;
}
