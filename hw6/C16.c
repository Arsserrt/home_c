/*
  простое число?
 */
 
#include <stdio.h>

int is_prime(int a)
{
    if (a == 1 || !a) 
		return 0;
	for (int i=2; i<a; i++)
	{
		if (a%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int x;
	scanf("%d",&x);
	if (is_prime(x))
		printf("YES");
	else
		printf("NO");
	return 0;
}

