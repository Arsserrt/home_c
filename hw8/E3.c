/*
Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.
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

int PosMin(int arr[], int n)
{
	int min = arr[0], pos = 0;
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			pos = i;
		}
	}
	return pos;
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
	printf("%d %d %d %d",PosMax(arr,N)+1, arr[PosMax(arr,N)], PosMin(arr,N)+1, arr[PosMin(arr,N)]);
	return 0;
}

