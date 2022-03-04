/*Exercise 1.5.4 asks us to print a number digit by digit without using printf*/
/*Using putchar coupled with modulos and division*/

#include <stdio.h>

int main()
{
    int n = 356;        /*n denotes the integer to be printed*/
    printnumber(n);

    return 0;

}

int printnumber(int n)
{
    if (n < 0)
    {
        putchar('-');   /*if the number is less than zero, print negative first*/
        n = -n;         /*then flip the sign*/
    }
    if (n / 10)         /*in the case where n is 356, first argument received is 356, then 35, then 3*/
        printnumber(n / 10);    /*first level printnumber prints 3, then second level prints 5, ... and so on*/
    putchar(n % 10 + '0');

    return 1;

}