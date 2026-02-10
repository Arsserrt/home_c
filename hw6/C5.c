/*
 * сумма от 1 до N
 */
 
#include <stdio.h>
#include <stdlib.h>

int sum1_N(int n)
{
	int sum=0;
	for (int i=1; i<=n; i++)
		sum += i;
	return sum;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",sum1_N(n));
	return 0;
}
