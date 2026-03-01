/*
Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам: в одни помещать только положительные, во второй - только отрицательные. 
Числа, равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.
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

int ComparePos(int arr[], int arr1[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] > 0)
			arr1[count++] = arr[i];
	}
	return count;
}

int CompareNeg(int arr[], int arr1[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] < 0)
			arr1[count++] = arr[i];
	}
	return count;
}

int main()
{
	int arr[N];
	int arrPos[N] = {0};
	int arrNeg[N] = {0};
	input (arr,N);
	print (arrPos,ComparePos(arr,arrPos,N));
	print (arrNeg,CompareNeg(arr,arrNeg,N));
	return 0;
}
