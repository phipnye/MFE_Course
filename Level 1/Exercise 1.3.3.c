/*This exercise asks us to predict the output of this code based on order of operators*/

/*Operators*/
#include <stdio.h>

int main()
{
	int x;

	x = -3 + 4 * 5 - 6;		/*x=-3+20-6=17-6=11*/
	printf("x=%d\n", x);	/*prints x=11. Then, a new line is entered*/

	x = 3 + 4 % 5 - 6;		/*x=3+4-6=7-6=1*/
	printf("x=%d\n", x);	/*prints x=1. Then, a new line is entered*/

	x = -3 * 4 % -6 / 5;	/*x=(-12mod-6)/5=0/5=0*/
	printf("x=%d\n", x);	/*prints x=0. Then, a new line is entered*/

	x = (7 + 6) % 5 / 2;	/*x=(13mod5)/2=3/2=1.5 but the .5 will get dropped*/
	printf("x=%d\n", x);	/*prints x=1. Then, a new line is entered*/

	return 0;

}