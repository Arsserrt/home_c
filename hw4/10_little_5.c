/*
 * меньшее из 5и
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,d,e,m;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	m = (a<b)?a:b;
	m = (m<c)?m:c;
	m = (m<d)?m:d;
	m = (m<e)?m:e;
	printf("%d",m);
	return 0;
}
