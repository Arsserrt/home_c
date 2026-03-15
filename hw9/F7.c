/*
	F7-Упаковать массив 0 1
 */


#include <stdio.h>
//~ #include <string.h>

#define Na 100

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

int compression(int a[], int b[], int N)
{
	int cnt0 = 0, cnt1 = 0, cntb = 0, dir;
	if (a[0])
	{
		b[cntb++] = 0; dir = 1;
	}
	else
	{
		dir = 0;
	}
	for (int i = 0; i < N; i++)
	{
		if (dir)
		{
			if(a[i]) 
			{
				cnt1++;
			}
			else 
			{
				b[cntb++] = cnt1; 
				cnt1 = 0; 
				cnt0++;
				dir = 0;
			}
		}
		else
		{
			if(!a[i]) 
			{
				cnt0++;
			}
			else
			{
				b[cntb++] = cnt0; 
				cnt0 = 0; 
				cnt1++;
				dir = 1;			
			}
		}
		//~ printf("dir %d cnt0 %d cnt1 %d\n", dir, cnt0, cnt1);	
		if(i == N-1)
		{
			if (dir) b[cntb++] = cnt1;
			else b[cntb++] = cnt0; 
		}
	}
	return cntb;
}

int main()
{
	int arr[Na], brr[Na] = {0};
	input (arr,Na);
	//~ char s[N] = {'\0'};
	//~ scanf("%[^\n]",s);
	compression(arr, brr, Na);
	print(brr,Na);
	//~ print (arr,N);
	return 0;
}

