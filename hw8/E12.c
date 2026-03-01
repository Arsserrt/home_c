/*
Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.
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

void HalfBubbleSort(int arr[], int n)
{
	int noSwap;
	for(int i=n/2-1; i>=0; i--)
	{
		 noSwap = 1;
		 for(int j=0; j<i; j++)
		{	

			if(arr[j] > arr[j+1])
			{
				 SwapArr(arr,j,j+1);
				 noSwap = 0;
			}
		}
		if(noSwap)
			break;
	}
		for(int i=n-1; i>=n/2; i--)
	{
		 noSwap = 1;
		 for(int j=n/2; j<i; j++)
		{	

			if(arr[j] < arr[j+1])
			{
				 SwapArr(arr,j,j+1);
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
	HalfBubbleSort (arr,N);
	print (arr,N);
	return 0;
}
