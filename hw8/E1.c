/*
Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.
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

float SrAr(int arr[], int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return (float)summ/n;
}

int main()
{
	int arr[N];
	input (arr,N);
	printf("%.3f",SrAr(arr,N));
	return 0;
}

