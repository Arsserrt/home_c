/*
Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива. Необходимо изменить считанный массив и напечатать его одним циклом.
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

void inversion(int arr[], int n)
{
	int box;
	for (int i = 0; i < n/4; i++)
	{
		box = arr[i];
		arr[i] = arr[n/2-1-i];
		arr[n/2-1-i] = box;
		box = arr[n/2+i];
		arr[n/2+i] = arr[n-1-i];
		arr[n-i-1] = box;
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
