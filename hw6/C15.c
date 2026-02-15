/*
  цифры по возрастанию
 */
 
#include <stdio.h>

int grow_up(int n)
{
	int a=0;
	for (int i=0; n>0; i++)
	{
		a = n%10;
		n /= 10;
		if (n%10 >= a) 
			return 0;
	}
	return 1;
}

int main()
{
	int x;
	scanf("%d",&x);
	if (grow_up(x))
		printf("YES");
	else
		printf("NO");
	return 0;
}

