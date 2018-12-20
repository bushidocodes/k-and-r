/**
 * K&R Exercise 1-13
 * Page 24
 * Write a program to print a histogram of the lengths of works in its input. It is easy to draw 
 * the histogram with the bars horizontal; a vertical orientation is more challenging.
 * Completed 12/20/2018
 **/

#include <stdio.h>

int main(void)
{
    char c;
    int lengthOfCurrentWord = 0;
    int lengthsOfWords[20] = {0};

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':
        case '\t':
        case ' ':
            if (lengthOfCurrentWord != 0)
            {
                lengthsOfWords[lengthOfCurrentWord - 1]++;
                lengthOfCurrentWord = 0;
            }
            break;
        default:
            lengthOfCurrentWord++;
        }
    }

    for (int i = 0; i < sizeof(lengthsOfWords) / sizeof(lengthsOfWords[0]); i++)
    {
        putchar('\n');
        printf("%2d|", i + 1);
        for (int j = 0; j < lengthsOfWords[i - 1]; j++)
        {
            putchar('*');
        }
    }
    putchar('\n');
    return 0;
}