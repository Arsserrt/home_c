/*
 * произведение цифр 3х-значного числа
 */


#include <stdio.h>

int main()
{
	int a, m=0;
	scanf("%d",&a);
	m = a%10;
	m *= (a/10)%10;
	m *= (a/100)%10;
	printf("%d",m);
	return 0;
}

