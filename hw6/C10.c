/*
 Простые множетили
 */
 
#include <stdio.h>

void print_simple(int n)
{
    while (n % 2 == 0) 
    {
        printf("%d ", 2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2) 
    {
        while (n % i == 0) 
        {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2) 
    {
        printf("%d", n);
    }
}

int main()
{
	int n;
	scanf("%d",&n);
	print_simple(n);
	return 0;
}
