/*
 * меньшее+большее из 5и
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,d,e,m,max;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	m = (a<b)?a:b;
	m = (m<c)?m:c;
	m = (m<d)?m:d;
	m = (m<e)?m:e;
	max = (a>b)?a:b;
	max = (max>c)?max:c;
	max = (max>d)?max:d;
	max = (max>e)?max:e;
	printf("%d",m+max);
	return 0;
}
