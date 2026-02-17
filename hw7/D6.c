/*
Дана строка заканчивающаяся символом точка '.' Напечатать строку наоборот. Реализуйте рекурсивную функцию, которая считывает и печатает строку наоборот.
 */


#include <stdio.h>

void reverse_string(void)
{
	 char ch;
	 scanf ("%c", &ch); 
	 if (ch != '.') 
	 {
		reverse_string(); 
		printf ("%c", ch); 
	 }
}

int main()
{
	reverse_string();
	return 0;
}

