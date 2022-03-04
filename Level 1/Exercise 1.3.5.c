/*This exercise is used to better understand the difference between postfix and prefix operators*/

#include <stdio.h>

int main()
{
	int a = 20; /*a equals 20*/
	int i = 40; /*i equals 40*/
	int b = 0;

	/*Postfix operator*/
	b = a + i--;							/*b equals 60 and i equals 39*/
	printf("With Postfix operator i--:\ni equals %d\nb equals %d\n", i, b);
	/*Prints i equals 39 and b equals 60*/

	/*Prefix operator*/
	i = 40;									/*reset i to 40*/
	b = a + --i;							/*b equals 59 and i equals 39*/
	printf("With Prefix operator --i:\ni equals %d\nb equals %d\n", i, b);
	/*Prints i equals 39 and b equals 59*/

	return 0;
}