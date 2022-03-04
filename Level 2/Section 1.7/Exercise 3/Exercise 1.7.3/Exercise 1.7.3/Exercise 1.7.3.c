/*Exercise 1.7.3 is checking for understanding of pointers and arrays by predicting outputs*/

/* Predict what will be printed on the screen */

#include <stdio.h>

#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line

/* Create and initialize array */
int a[] = { 0, 1, 2, 3, 4 };

int main()
{
	int i;		/*create integer i which will allow for pointing to objects in the array*/
	int* p;		/* p is a pointer to int */

	for (i = 0; i <= 4; i++) PRD(a[i]); /* 1 */
	NL;		
	/*initialize i to zero and increment it for every loop iteration up until 4*/
	/*printing the (i+1)th object of the array for each iteration of the loop up until the 5th*/
	/*prints 01234 and a new line*/
	for (p = &a[0]; p <= &a[4]; p++) PRD(*p); /* 2 */
	NL;		
	NL;
	/*initalize p to contain the address of the 1st object of a*/
	/*move to the next object for each iteration up until the 5th*/
	/*printing the next object of the array for each iteration of the loop up until the 5th*/
	/*prints 01234 and two new lines*/
	for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]); /* 3 */
	NL;
	/*initalize p to contain the address of the 1st object of a*/
	/*increment i and move to the next object for each iteration up until the fifth*/
	/*printing the (i+1)th object of the array for each iteration of the loop up until the 5th*/
	/*prints 01234 and a new line*/
	for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p + i)); /* 4 */
	NL;
	NL;
	/*initalize p to contain the address of the 1st object of a*/
	/*move to the next, next object for each iteration of the loop up until the 5th*/
	/*printing every other object*/
	/*prints 024 and two new lines*/
	for (p = a + 4; p >= a; p--) PRD(*p); /* 5 */
	NL;
	/*initalize p to contain the address of the 5th object of a*/
	/*move back an object for each iteration until the 1st object is reached*/
	/*printing the previous object of the array for each iteration of the loop*/
	/*prints 43210 and a new line*/
	for (p = a + 4, i = 0; i <= 4; i++) PRD(p[-i]); /* 6 */
	NL;
	/*initalize p to contain the address of the 5th object of a*/
	/*move back an object for each iteration until the 1st object is reached as p[-i] = *(p - i)*/
	/*printing the previous object of the array for each iteration of the loop*/
	/*prints 43210 and a new line*/
	for (p = a + 4; p >= a; p--) PRD(a[p - a]); /* 7 */
	NL;
	/*initalize p to contain the address of the 5th object of a*/
	/*decrement p for each iteration of the loop up until the 1st object of the array is reached*/
	/*printing the previous object of the array for each iteration of the loop and remembering that
	  initially, a[p-a] = a[a+4-a] = a[4] = 4 which gets decremented with p for each loop iteration*/
	/*prints 43210 and a new line*/
	return 0;
}