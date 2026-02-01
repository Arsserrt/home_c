/*
 * сумма цифр 3х-значного числа
 */


#include <stdio.h>

int main()
{
	int a, s=0;
	scanf("%d",&a);
	s += a%10;
	s += (a/10)%10;
	s += (a/100)%10;
	printf("%d",s);
	return 0;
}

