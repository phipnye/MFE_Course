/*Exercise 1.5.3 asks us to assign a value in one source file
and then multiply that value by two and print in a second source file */

#include<stdio.h>

int main()
{
	int i;		/*i denotes the integer that'll be doubled*/

	printf("Type in an integer to be doubled: ");
	scanf_s("%d", &i);

	Print(i);

	return 0;
}