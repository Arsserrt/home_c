/*
 * написать время года
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
    scanf("%d",&a);
	if (a<=2 || a==12) printf ("winter");
	else if (a<=5)  printf ("spring");
	else if (a<=8)  printf ("summer");
	else printf ("autumn");
	return 0;
}
