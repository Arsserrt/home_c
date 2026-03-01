/*
Считать массив из 10 элементов и посчитать сумму положительных элементов массива.
 */


#include <stdio.h>

#define N 10

int input (int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	return i;
}

int SummPositive(int arr[], int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			summ += arr[i];
		}
	}
	return summ;
}

int main()
{
	int arr[N];
	input (arr,N);
	printf("%d",SummPositive(arr,N));
	return 0;
}

