/*
	F5-Максимум в массиве
 */


#include <stdio.h>
//~ #include <string.h>

#define N 100

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

int find_max_array(int size, int a[])
{
	int max = a[0], pos = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			pos = i;
		}
	}
	//~ printf("%d\n",a[pos]);
	return a[pos];
}

int main()
{
	int arr[N];
	input (arr,N);
	//~ char s[N] = {'\0'};
	//~ scanf("%[^\n]",s);
	find_max_array (N, arr);
	//~ print (arr,N);
	return 0;
}

