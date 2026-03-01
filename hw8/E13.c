/*
Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) – ноль.
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

int SecondNull(int arr[], int arr1[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (!((arr[i]/10)%10))
		{
			arr1[count++] = arr[i];
		}
	}
	return count;
}

int main()
{
	int arr[N];
	int arr1[N];
	input (arr,N);
	print (arr1,SecondNull(arr,arr1,N));
	return 0;
}
