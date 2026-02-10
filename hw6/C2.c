/*
 * int power(n, p)
 */
 
#include <stdio.h>
#include <stdlib.h>

int power(int n,int p)
{
	int a=1;
	for(int i=0; i<p; i++)
		a *= n;
	return a;
}

int main()
{
	int n, p;
	scanf("%d%d",&n,&p);
	printf("%d",power(n,p));
	return 0;
}
