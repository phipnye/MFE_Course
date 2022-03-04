/*Exercise 1.7.2 asks us to create a Length function that determines the length of a string*/

/* Calculate the length of a string */

#include <stdio.h>

#define MAXLINE 30

/*String length declaration*/
int Length(char str[]);

int main()
{
	char string[MAXLINE + 1]; /*Line of maximum 30 chars + \0*/
	int c; /*The input character*/
	int i = 0; /*The counter*/ 

	/*Print intro text*/ 
	printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);

	/*Get the characters*/
	while ((c = getchar()) != EOF && i < MAXLINE)
	{
		/*Append entered character to string*/
		string[i++] = (char)c;
	}
	string[i] = '\0'; /*String must be closed with \0*/

	printf("String length is %d\n", Length(string));

	return 0;
}

/* Implement the Length() function here */
int Length(char string[])
{
	int len_cnt = 0;			/*The length counter*/

	while (*string != '\0')		/*End loop at \0 at end of string*/
	{
		len_cnt++;				/*Increment i until \0 at end of string is reached*/
		string++;				/*Moves to next character in array until \0 is reached at end*/
	}
	return len_cnt;				/*returns length count value*/
}