/*
	F2-Четные в начало
 */


#include <stdio.h>
//~ #include <string.h>

#define N 5

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

void sort_even_odd(int n, int a[])
{
	int b[n];
	int cnt=0;
	for (int i=0; i<n; i++)
	{
		if (!(a[i]%2))
		{
			b[cnt++] = a[i];
		}	
	}
	for (int i=0; i<n; i++)
	{
		if (a[i]%2)
		{
			b[cnt++] = a[i];
		}	
	}
	for (int i=0; i<n; i++)
	{
		a[i] = b[i];
	}
}

int main()
{
	int arr[N];
	input (arr,N);
	sort_even_odd (N,arr);
	print (arr,N);
	return 0;
}

