/*
	G8-Числа в массив
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 1000

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
	FILE *f;
    char num_str[N];
    int numbers[N];
    int count = 0;
	f = fopen("input.txt","r"); 
	for (;count < N;) 
    {
		fscanf(f, "%*[^0-9]");
		if (fscanf(f, "%[0-9]", num_str) == 1) {
			numbers[count++] = atoi(num_str);
		} else {
			break;  
		}
	}
	//~ for (int i = 0; i < count; i++) 
	//~ {
		//~ printf("%d ", numbers[i]);
	//~ }
	fclose(f); 
	
// close in, open out
	f = fopen("output.txt","w");
	bubbleSort(numbers, count);
	for (int i = 0; i < count; i++) 
	{
		fprintf(f,"%d ", numbers[i]);
	}
	fclose(f);
	return 0;
}
