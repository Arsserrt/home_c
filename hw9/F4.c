/*
	F4-Цифры в строке
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

void print_digit(char s[])
{
	int arr[10] = {0};
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <='9')
			arr[s[i]-'0']++;
	}
	for (int i = 0; i<10; i++)
		if (arr[i])
		{
			printf("%d %d\n", i, arr[i]);
		}
}

int main()
{
	//~ int arr[N];
	//~ input (arr,N);
	char s[N] = {'\0'};
	scanf("%[^\n]",s);
	print_digit (s);
	//~ print (arr,N);
	return 0;
}

