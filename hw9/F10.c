/*
	F10-Упаковать строку
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

int inputStr (char str[], int n)
{
	int i;
	for(i=0; i<n && (str[i] = getchar()) != '.'; i++)
	{
	}
	str[i] = '\0';
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

void StrPack (char a[], char b[], int n)
{
	int cnt = 0, cntb = 0;
	b[cntb++] = a[0];
	for (int i = 0; i < n; i++)
	{
		if(a[i] == a[i+1])
		{
			cnt++;
		}
		else
		{
			//b[cntb++] = ++cnt + 0x30;
			cnt++;
			for (int j = 1000; j > 0; j/=10)
			{
				if (cnt >= j)
				b[cntb++] = ((cnt/j)%10) + 0x30;	
			}
			cnt = 0;
			b[cntb++] = a[i+1];
		}
	}
}

int main()
{
	char str[N];
	char rez[N];
	//~ input (arr,N);
	//~ scanf("%[^.]", str);
	//~ inputStr (str, N);
	//~ print (arr,N);
	StrPack(str,rez,inputStr (str, N));
	printf("%s",rez);
	return 0;
}

