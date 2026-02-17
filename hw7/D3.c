/*
 Дано целое не отрицательное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.
 */


#include <stdio.h>

void rec(int n) {
	if (n!=0)
		printf("%d ",n%10);
	if(n>0) 
		rec(n/10);
}

int main()
{
	int n;
	scanf("%d",&n);
	if (n==0) 
		printf("0");
	else 
		rec(n);
	return 0;
}

