/*This exercise asks us to count the number of times 0-4 and other characters are entered*/

#include<stdio.h>

int main()
{
    printf("To initiate counting after typing, press: Enter, ctrl+z, Enter\n");
    printf("Enter text below: \n");

    int c, zrs, ones, twos, thrs, frs, characters;
    /*  zrs denotes zeros count
        ones denotes ones count
        twos denotes twos count
        thrs denotes threes count
        frs denotes fours count
        characters denotes other character count*/

    c = zrs = ones = twos = thrs = frs = characters = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '0':       /*In cases where a zero is entered*/
            ++zrs;      /*Increment zeros count*/
            break;
        case '1':       /*In cases where a one is entered*/
            ++ones;     /*Increment ones count*/
            break;
        case '2':       /*In cases where a two is entered*/
            ++twos;     /*Increment twos count*/
            break;
        case '3':
            ++thrs;
            break;
        case '4':
            ++frs;
            break;
        default:
            ++characters;
            break;
        }
    }
    printf("Zeros Count: %d\n", zrs);
    printf("Ones Count: %d\n", ones);
    printf("Twos Count: %d\n", twos);
    printf("Threes Count: %d\n", thrs);
    printf("Fours Count: %d\n", frs);
    printf("Other Characters Count: %d", characters);

    return 0;
}