/*This exercise is intended to show proficiency in assignment operator outputs*/
/*Assignment operators*/

#include <stdio.h>

int main()
{
	int x = 2;				/*x=2*/
	int y;
	int z;

	x *= 3 + 2;				/*x=x*(3+2)=2*5=10*/
	printf("x=%d\n", x);	/*Prints x=10. Then, enters a new line.*/

	x *= y = z = 4;			/*x=x*y=10*z=10*4=40*/
	printf("x=%d\n", x);	/*Prints x=40. Then, enters a new line.*/

	x = y == z;				/*x=(TRUE)=1*/
	printf("x=%d\n", x);	/*Prints x=1. Then, enters a new line.*/

	return 0;

}