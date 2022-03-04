/*This exercise asks us to count the number of times 0-4 and other characters are entered*/
/*This is similar to exercise 1.4.6 with a slight nuance for three*/

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
        case '3':       /*In cases where a three is entered*/
            ++thrs;     /*Increment threes count*/
            break;
        case '4':       /*In cases where a four is entered*/
            ++frs;      /*Increment fours count*/
            break;
        default:            /*Otherwise*/
            ++characters;   /*Increment other characters count*/
            break;
        }
    }
    printf("Zeros Count: %d\n", zrs);
    printf("Ones Count: %d\n", ones);
    printf("Twos Count: %d\n", twos);
    switch (thrs)
    {
    case 0:
        printf("Number three appears zero times.\n");
        break;
    case 1:
        printf("Number three appears one time.\n");
        break;
    case 2:
        printf("Number three appears two times.\n");
        break;
    default:
        printf("The number three appears more than two times.\n");
        break;
    }
    printf("Fours Count: %d\n", frs);
    printf("Other Characters Count: %d", characters);

    return 0;

}