/*
 * зерна
 */
 
#include <stdio.h>
#include <stdlib.h>

unsigned long long int func(int n)
{
	unsigned long long int a=1;
	for(int i=1; i<n; i++)
		a *= 2;
	return a;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%llu",func(n));
	return 0;
}
