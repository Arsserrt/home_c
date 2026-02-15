/*
  сумма = произведению
 */
 
#include <stdio.h>

int is_happy_number(int a)
{
    int summ=0, mult=1;
	while (a)
	{
		summ += a%10;
		mult *= a%10;
		a /= 10;
	}
	return summ == mult ? 1 : 0;
}

int main()
{
	int x;
	scanf("%d",&x);
	if (is_happy_number(x))
		printf("YES");
	else
		printf("NO");
	return 0;
}

