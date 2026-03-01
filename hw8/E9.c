/*
Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.
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

void Rshift(int arr[], int n)
{
	int box = arr[n-1];
	for (int i = n-1; i > 0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = box;
}

int main()
{
	int arr[N];
	input (arr,N);
	Rshift (arr,N);
	print (arr,N);
	return 0;
}
