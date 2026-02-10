/*
 * строка c CapsLock
 */
 
#include <stdio.h>

void func()
{
	char str[1000];
    scanf("%[^\n]", str);
	for (int i = 0; str[i] != '.'; i++) 
	{
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 0x20;
        }
	}
	int i = 0;
	for (; str[i] != '.'; i++)
	{		
	}
	str[i] = 0;
    printf("%s",str);
}

int main()
{
	func();
	return 0;
}
