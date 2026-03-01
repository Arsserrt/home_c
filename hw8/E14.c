/*
Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются более одного раза. В результирующем массиве эти числа не должны повторяться.
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

int repeat(int arr[], int arr1[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				int br = 1;
				for(int k = 0; k < count; k++)
					if (arr1[k] == arr[i])
						br = 0;
				if (br)
					arr1[count++] = arr[i];
			}
		}
	}
	return count;
}

int main()
{
	int arr[N];
	int arr1[N] = {0};
	input (arr,N);
	print (arr1,repeat(arr,arr1,N));
	return 0;
}
