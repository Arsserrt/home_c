/*
	F8-Найти пропущенное число
 */


#include <stdio.h>
//~ #include <string.h>

#define N 1000

int input (int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	return i;
}

int input_to_0 (int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i] == 0) break;
	}
	return i+1;
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

int missing(int a[], int n)
{
	int min = a[0], exist = 0;
	for (int i = 1; i < n-1; i++)
		if (min > a[i]) min = a[i];
	for (int i = 1; i < n-1; i++)
	{
		exist = 0;
		for (int j = 0; j < n-1; j++)
			if(min+i == a[j]) exist = 1;
		if (!exist) return min+i; 
	}
	return 0;
}

int main()
{
	int arr[N];
	//~ input (arr,N);
	printf("%d",missing(arr, input_to_0(arr, N)));
	//~ char s[N] = {'\0'};
	//~ scanf("%[^\n]",s);
	//~ print (arr,N);
	return 0;
}

