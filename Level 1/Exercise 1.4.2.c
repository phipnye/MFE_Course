/*Exercise 1.4.2 asks us to create a word, line, and character counter using a do while loop*/

#include <stdio.h>

#define IN 1		/*denotes inside a word*/
#define OUT 0		/*denotes outside a word*/

int main()
{
	printf("To initiate counting after typing, press: Enter, ctrl+z, Enter\n");
	printf("Enter text below: \n");

	int c, loc, line, word, charctr;
	/*c denotes current character*/
	/*loc denotes a character's location*/
	/*line, word, and charactr denote respective counts*/

	c = line = word = 0;
	charctr = -1;
	loc = OUT;

	do
	{
		++charctr;			/*no matter the input, add increment character count*/
		if (c == '\n')
			++line;			/*increment line count every time new line entered*/
		if (c == ' ' || c == '\n' || c == '\t')
			loc = OUT;		/*if current character is space, new line, or tab, set location to outside*/
		else if (loc == OUT)
		{
			loc = IN;		/*if previous character wasn't new line, space, or tab*/
			++word;			/*and current character is, increment word count*/
		}
	} 
	while ((c = getchar()) != EOF);
	
	printf("Character Count: %d\n", charctr);
	printf("Word Count: %d\n", word);
	printf("Line Count: %d\n", line);

	return 0;

}