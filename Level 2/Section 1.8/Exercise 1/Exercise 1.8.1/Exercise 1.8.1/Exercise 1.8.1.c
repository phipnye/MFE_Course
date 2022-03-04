/*Exercise 1.8.1 asks us to create a program that prints the contents of a struct called Article*/
/*An Article should have an article number, a quantity, and a description*/

#include<stdio.h>

void Print(struct Article*p);		/*Declaration of Print function using pointer *p to pass the structure*/

struct Article						/*Declaration of the structure Article*/
{									/*Its members are article number, quantity, and description*/
	int article_num;				/*Article number*/
	int quantity;					/*Quantity*/
	const char description[21];		/*Constant character type description with a maximum of 20 characters*/
};

int main()
{
	struct Article art1 = { 1 , 20 ,"A short description" };
	/*Initialize the content of the Article structure art1*/
	Print(&art1);
	/*Prints members using Print function and the address of art1*/
	
	return 0;

}
/*Prints the article number, quantity, and description of the Article*/
void Print(struct Article*p)
{
	printf("Article Number: %d\nQuantity: %d\nDescription: %s", p->article_num, p->quantity, p->description);
}