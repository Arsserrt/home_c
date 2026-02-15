/*
  сумма цифр четная?
 */
 
#include <stdio.h>

int even_sum(int x)
{
	int sum=0;
	for (int i=0; x>0; i++)
	{
		sum += x%10;
		x /= 10;
	}
	return sum%2?0:1;
}

int main()
{
	int x;
	scanf("%d",&x);
	if (even_sum(x))
		printf("YES");
	else
		printf("NO");
	return 0;
}

