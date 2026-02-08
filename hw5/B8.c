/*
 * есть ли одна 9?
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input, a=0, answer=0;
    scanf("%d",&input);
	for (int i=0; input>0; i++)
	{
		a = input%10;
		input /= 10;
		if (a == 9) answer++;
	}
	if (answer == 1) 	printf("YES");
	else 				printf("NO");
	return 0;
}
