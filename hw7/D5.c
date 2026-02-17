/*
Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.
 */


#include <stdio.h>

void print_num(int n)
{
	if(n>0) 
		print_num(n/2);
	if (n!=0)
		printf("%d",n%2);
}

int main()
{
	int n;
	scanf("%d",&n);
	if (n==0) 
		printf("0");
	else 
		print_num(n);
	return 0;
}

