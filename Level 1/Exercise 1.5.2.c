/*Exercise 1.5.2 asks us to create a factorial calculator using recursion*/

#include<stdio.h>

long long int factorial(unsigned int w_num)
{
    if (w_num > 0)                              /*stop when number gets down to one*/
        return w_num * factorial(w_num - 1);    /*factorial = n * (n - 1)*...1*/
    else
        return 1;
}

int main()
{
    unsigned int w_num;      /*w_num denotes entered positive whole number*/

    printf("Enter a positive whole number: ");
    scanf_s("%u", &w_num);
    printf("%d factorial = %llu", w_num, factorial(w_num));
    
    return 0;
}