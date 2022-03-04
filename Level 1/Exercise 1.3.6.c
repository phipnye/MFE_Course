/*This exercise is intended to show understanding of a right shift*/
/*It also teaches understanding between rigth arithmetic and logical shifts*/

#include<stdio.h>

int main()
{
	int a = 142;		/*a = 142 (10001110)*/

	printf("If a, which equals 142, is shifted right twice, the result is %d\n", a >> 2);
	/*The result is 35 (00100011), right logical shift*/

	printf("This exemplifies a right logical shift as zeros enter on the left.");
	/*Shifting a twice to the right results in a right logical shift*/

	return 0;

}