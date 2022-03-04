/*Exercise 1.9.2 is a rework of Exercise 1.9.1*/
/*It asks us to create a program that reads characters from the keyboard and shows them in a user specified file*/

#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

int main()
{
	int c;								/*c will be used for keyboard input*/
	char filename[105] = { '\0' };		/*filename will be used to open desired file with max of 104 characters*/
	FILE* fp;							/*file pointer to the file to write to*/
	errno_t err;						/*err will be used to trip an error statement if fp is set to null*/

	printf("Please enter a file name of less than 105 characters for output (include .txt for text file or .doc for word document):\n");

	scanf_s("%s", filename, (unsigned)_countof(filename));	/*User inputs file to be written to*/

	if ((err = fopen_s(&fp, filename, "w")) != 0)	/*Unable to open file. fp was set to NULL*/
	{
		printf("Error, cannot open specified file\n");	/*Print error*/
		exit(1);										/*Then, end the program*/
	}

	printf("Please type and press ENTER to have your text reprinted on the chose file (Press CTRL + A when finished):\n");
	/*Asks for keyboard input from user to be reprinted to specified file*/

	while (c = getchar())
		if (c == 1)		/*If CTRL+A, which has a value of 1, is entered*/
		{
			printf("CTRL + A is a correct ending.\n");		/*Print CTRL+A is a correct ending to both*/
			fprintf(fp, "CTRL + A is a correct ending.\n");	/*The file and the console*/
			break;											/*End loop*/
		}
		else			/*Otherwise*/
		{
			fputc(c, fp);									/*Output the user's input to the file*/
		}
	if (fp != NULL)		/*If fp not set to NULL*/
		fclose(fp);									/*Close the specified file with fclose() function*/

	return 0;

}