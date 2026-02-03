/*
 * верное следование
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
	if (a<b)
	{
		if (b<c) 
		{
			printf ("YES");
			return 0;
		}
	}
	printf ("NO");
	return 0;
}
