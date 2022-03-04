/*The purpose of this exercise is to get familiarized with conditional expressions and their outputs*/
/*Conditional expressions*/

#include <stdio.h>

int main()
{
	int x = 1;			/*x=1*/
	int y = 1;			/*y=1*/
	int z = 1;			/*z=1*/

	x += y += x;		/*x=x+(y=y+x)=1+(1+1)=3*/
	/*x=3, y=2*/

	printf("%d\n\n", (x < y) ? y : x);      /*Number 1*/
	/*Prints 3 as x<y is false since 3<2 is false, so the value of x is printed*/
	/*Then, enters two new lines*/

	printf("%d\n", (x < y) ? x++ : y++);    // Number 2
	/*Prints 2 as x<y is false since 3<2 is false, so the value of y is printed.*/
	/*Then, enters a new line.*/

	printf("%d\n", x);                /*Number 3*/
	/*Prints the value of x, which is 3.*/
	/*Then, enters a new line.*/

	printf("%d\n", y);                /*Number 4*/
	/*Prints the value of y, which is 3.*/
	/*Then, enters a new line.*/

	return 0;

}