/*Exercise 1.7.1 asks us to create a function Swap, which exchanges the value of two variables using pointers*/

#include<stdio.h>

void Swap(int* pi, int* pj);	/*Declaration of function Swap with integer pointer arguments*/
								/* *pi indicates pointer to i and *pj indicates pointer to j */

int main()
{
	int i = 123;					/* i = 123 */
	int j = 456;					/* j = 456 */

	printf("Before Swap:\n");		/*Prints Before Swap:*/
	printf("i equals %d\n", i);		/*i equals 123*/
	printf("j equals %d\n", j);		/*j equals 456*/

	Swap(&i, &j);					/*swaps value of i and j using swap function and pointers*/

	printf("After Swap:\n");		/*Prints After Swap:*/
	printf("i equals %d\n", i);		/*i equals 123*/
	printf("j equals %d\n", j);		/*j equals 456*/

	return 0;

}

void Swap(int* pi, int* pj)		/*swap *pi and *pj*/
{
	int hold;						/*hold is a variable that will hold the content of one var*/

	hold = *pj;						/* hold holds the content of *pj */
	*pj = *pi;						/* *pj assigned content of *pi */
	*pi = hold;						/* *pi assigned original content of *pj held by hold */
}