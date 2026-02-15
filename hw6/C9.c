/*
 * N!
 */
 
#include <stdio.h>

int factorial(int n)
{
	int rez=1;
	for (int i=1;i<=n;i++)
	{
		rez *= i;
	}
	return rez;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf ("%d",factorial(n));
	return 0;
}
