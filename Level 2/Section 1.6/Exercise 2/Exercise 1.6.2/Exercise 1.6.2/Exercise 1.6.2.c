/*Exercise 1.6.2 asks us to create a MAX2 macro, which decides the greater value between two variables*/
/*and a MAX3 macro, which decides the greater value of three variables using MAX2*/

#include<stdio.h>
#include "Defs.h"

int main()
{
	int x, y, z;
	x = 5;			/*x = 5*/
	y = 7;			/*y = 7*/
	z = 9;			/*z = 9*/

	printf("The maximum value between x and y is %d\n", MAX2(x, y));
	/*uses the MAX2 macro defined in Defs.h to determine greater value between x and y*/
	/*prints the greater value, which in this case is y, which equals 7*/
	printf("The maximum value among x, y, and z is %d\n", MAX3(x, y, z));
	/*uses the MAX3 macro defined in Defs.h to determine greatest value among x, y, and z*/
	/*prints the greatest value, which in this case is z, which equals 9*/

	return 0;

}