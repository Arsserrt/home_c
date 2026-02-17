/*
 summ 1+...+N
 */


#include <stdio.h>

int rec(int n) {
 if(n>1) n += rec(n-1);
 return n;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",rec(n));
	return 0;
}

