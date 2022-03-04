#include<stdio.h>

int main()
{
	int c;					/*declare c which will be used for keyboard input*/

	printf("Please type and press ENTER to have your text reprinted (Press CTRL + A when finished):\n");
	/*asks for keyboard input from user*/

	while (c = getchar())
		if (c == 1)			/*if CTRL+A, which has a value of 1, is entered*/
		{
			printf("CTRL + A is a correct ending.\n");	/*print CTRL+A is a correct ending*/
			break;										/*end the loop*/
		}
		else				/*otherwise*/
		{
			putchar(c);									/*output the user's input*/
		}

	return 0;

}