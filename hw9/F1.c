/*
	F1-Сортировка по возрастанию
 */


#include <stdio.h>

#define N 20

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

void sort_array(int size, int a[])
{
	int noSwap;
	for(int i=size-1; i>=0; i--)
	{
		 noSwap = 1;
		 for(int j=0; j<i; j++)
		{	
			if(a[j] > a[j+1])
			{
				 //SwapArr(a,j,j+1);
				int box = a[j];
				a[j] = a[j+1];
				a[j+1] = box;
				noSwap = 0;
			}
		}
		if(noSwap)
			break;
	}
}

int main()
{
	int arr[N];
	input (arr,N);
	sort_array (N,arr);
	print (arr,N);
	return 0;
}

