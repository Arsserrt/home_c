/*
 * среднее арифметическое
 */
 
#include <stdio.h>
#include <stdlib.h>

int medium(int a,int b)
{
	return (a+b)/2;
}

int main()
{
	int n, p;
	scanf("%d%d",&n,&p);
	printf("%d",medium(n,p));
	return 0;
}
