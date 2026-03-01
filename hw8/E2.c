/*
Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
 */


#include <stdio.h>

#define N 5

int input (int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	return i;
}

int minimum(int arr[], int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

int main()
{
	int arr[N];
	input (arr,N);
	printf("%d",minimum(arr,N));
	return 0;
}

