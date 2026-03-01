/*
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.
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

void RshiftK(int arr[], int n, int k)
{
	int box [4];
	for (int i = 0; i < k; i++)
		box [i] = arr [n - k + i];
	for (int i = n-1; i >= k; i--)
		arr[i] = arr[i-k];
	for (int i = 0; i < k; i++)
		arr [i] = box [i];
}

int main()
{
	int arr[N];
	input (arr,N);
	RshiftK (arr,N,4);
	print (arr,N);
	return 0;
}
