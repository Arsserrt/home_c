/*
	F9-Поменять местами
 */


#include <stdio.h>
//~ #include <string.h>

#define N 10

int input (int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	return i;
}

void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}

void SwapArr(int arr[], int i, int j)
{
	int box = arr[i];
	arr[i] = arr[j];
	arr[j] = box;
}

void swap_negmax_last(int size, int a[])
{
	int n_max = size-1, max = -2147483647;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < 0)
		{
			if (max < a[i]) 
			{
				max = a[i];
				n_max = i;
			}
		}
	}
	SwapArr(a,n_max,size-1);
}

int main()
{
	int arr[N];
	input (arr,N);
	swap_negmax_last(N,arr);
	print (arr,N);
	return 0;
}

