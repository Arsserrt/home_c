/*
Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.
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

int SummMax2(int arr[], int n, int Nmax)
{
	int max;
	if (Nmax) max = arr[0];
	else max = arr[1];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i] && i != Nmax)
		{
			max = arr[i];
		}
	}
	return max + arr[Nmax];
}

int PosMax(int arr[], int n)
{
	int max = arr[0], pos = 0;
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			pos = i;
		}
	}
	return pos;
}

int main()
{
	int arr[N];
	input (arr,N);
	printf("%d",SummMax2(arr,N,PosMax(arr,N)));
	return 0;
}

