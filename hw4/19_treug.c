/*
 * есть ли треугольник
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
	if ((a+b)>c)
		if ((a+c)>b) 
			if ((b+c)>a) 
			{
				printf ("YES");
				return 0;
			}
	printf ("NO");
	return 0;
}
