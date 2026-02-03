/*
 * максимальная цифра из числа
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	int s,a,b,c,max;
    scanf("%d",&s);
	a = s%10;
	b = (s/10)%10;
	c = (s/100)%10;
	max = (a>b)?a:b;
	max = (max>c)?max:c;
	printf("%d",max);
	return 0;
}
