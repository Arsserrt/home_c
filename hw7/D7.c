/*
 N...1 
 */


#include <stdio.h>

void rec(int n) {
	printf("%d ",n);
	if(n>1) rec(n-1);
}

int main()
{
	int n;
	scanf("%d",&n);
	rec(n);
	return 0;
}

