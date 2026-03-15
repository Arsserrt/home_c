/*
	F6-Два одинаковых
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

int is_two_same(int size, int a[])
{
	for (int i = 0; i < (size-1); i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (a[i] == a[j])
				return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[N];
	input (arr,N);
	//~ char s[N] = {'\0'};
	//~ scanf("%[^\n]",s);
	printf("%d",is_two_same(N,arr));
	//~ print (arr,N);
	return 0;
}

