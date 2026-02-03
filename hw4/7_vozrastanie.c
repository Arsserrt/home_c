/*
 * 2 числа в порядке возрастания
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",(a<b)?a:b,(a>b)?a:b);
	return 0;
}
