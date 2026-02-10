/*
 * перевод из 10-ой в Р-ичную
 */
 
#include <stdio.h>
#include <math.h>

int func(int n, int p)
{
	int rez=0;
	if (n<p)
		rez += n;
	for (int i=0;n>=p;i++)
	{
		rez = rez + n%p * pow(10,i);
		if ((n /= p)<p)
			rez += n * pow(10,i+1);
	}

	return rez;
}

int main()
{
	int n, p;
	scanf("%d%d",&n,&p);
	printf ("%d",func(n,p));
	return 0;
}
