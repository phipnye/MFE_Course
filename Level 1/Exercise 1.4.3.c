/*This exercise is similar to exercise 1.4.1, except now using swtich-case statements*/

#include<stdio.h>

int main()
{
    printf("To initiate counting after typing, press: Enter, ctrl+z, Enter\n");
    printf("Enter text below: \n");

    int c, lines, words, characters, prev_character;
    /*  lines denotes line count
        words denotes word count
        characters denotes character count
        prev_character denotes previous character and will be used to avoid counting consecutives*/

    c = lines = words = characters = prev_character = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':                  /*In cases where new lines are entered*/
            switch (prev_character)     /*Condition on previous character*/
            {
            case '\n' && '\t' && ' ':   /*If previous character was new line, tab, or space*/
                ++lines;                /*Increment lines*/
                ++characters;           /*Increment characters*/
                break;
            default:                    /*Otherwise*/
                ++lines;                /*Increment lines*/
                ++words;                /*Increment words*/
                ++characters;           /*Increment characters*/
                break;
            }
            break;
        case '\t':                  /*In cases where tabs are entered*/
            switch (prev_character)     /*Condition on previous character*/
            {
            case '\n':                  /*If previous character was new line*/
                ++characters;           /*Increment characters*/
                break;
            case '\t':                  /*If previous character was tab*/
                ++characters;           /*Increment characters*/
                break;
            case ' ':                   /*If previous character was space*/
                ++characters;           /*Increment characters*/
                break;
            default:                    /*Otherwise*/
                ++words;                /*Increment words*/
                ++characters;           /*Increment characters*/
                break;
            }
            break;
        case ' ':                   /*In cases where spaces are enterd*/
            switch (prev_character)     /*Condition on previous character*/
            {
            case '\n':                  /*If previous character was new line*/
                ++characters;           /*Increment characters*/
                break;
            case '\t':                  /*If previous character was tab*/
                ++characters;           /*Increment characters*/
                break;
            case ' ':                   /*If previous line was space*/
                ++characters;           /*Increment characters*/
                break;
            default:                    /*If previous character was not new line, space, or tab*/
                ++words;                /*Increment words*/
                ++characters;           /*Increment characters*/
                break;
            }
            break;
        default:                    /*Otherwise*/
            ++characters;           /*Increment characters*/
            break;
        }
        prev_character = c;         /*Set previous character after every iteration*/
    }

    printf("Character Count: %d\n", characters);
    printf("Word Count: %d\n", words);
    printf("Line Count: %d\n", lines);

    return 0;

}