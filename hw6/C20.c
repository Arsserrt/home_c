/*
  скобочки
 */
 
#include <stdio.h>

int brackets(char c)
{
	if (c == '(') return 1;
	if (c == ')') return -1;
	return 0;
}

int main()
{
	char str[1000];
	int summ=0;
    scanf("%[^\n]", str);
	for (int i = 0; str[i] != '.'; i++) 
	{
		summ += brackets(str[i]);
		if (summ < 0)
		{
			printf("NO");
			return 0;
		}
	}
	//~ printf("%d\n",summ);
	if (!summ)
		printf("YES");
	else
		printf("NO");
	return 0;
}

