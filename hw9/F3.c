/*
	F3-Цифры по возрастанию
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

void HowManyDigit(char str[])
{
	int arr[10] = {0};
	for (int i = 0; str[i] != '\0'; i++)
	{
		arr[str[i]-'0']++;
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
	scanf("%[0-9]",s);
	HowManyDigit (s);
	//~ print (arr,N);
	return 0;
}

