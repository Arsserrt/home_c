/*
  sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
 */
 
#include <stdio.h>
#include <math.h>

int factorial(int n)
{
	int rez=1;
	for (int i=1;i<=n;i++)
	{
		rez *= i;
	}
	return rez;
}

float sinus(float x)
{
	float acc=100;
	float rez=x;
	for (int i = 3, j = 1; acc > 0.001; i+=2)
	{
		if (j%2 == 0)
			rez += (pow(x,i) / factorial(i));
		else
			rez -= (pow(x,i) / factorial(i));
		acc = fabs(rez-sin(x)); 
		//~ printf("acc=%.3f, rez=%.3f\n",acc,rez);
		j++;
	}
	return rez;
}

int main()
{
	float x;
	scanf("%f",&x);
	printf("%.3f", sinus(x*3.141592/180));
	return 0;
}

