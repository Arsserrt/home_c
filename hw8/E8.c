/*
Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.
 */


#include <stdio.h>

#define N 12

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

void inversion(int arr[], int n)
{
	int box;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < n/6; i++)
		{
			box = arr[i+n/3*j];
			arr[i+n/3*j] = arr[n/3*(j+1)-1-i];
			arr[n/3*(j+1)-1-i] = box;
		}
	}
}

int main()
{
	int arr[N];
	input (arr,N);
	inversion (arr,N);
	print (arr,N);
	return 0;
}
