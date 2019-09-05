/**
 * K&R Exercise 1-14
 * Page 24
 * Write a program to print a histogram of the frequencies of different characters in its input.
 * Completed 12/20/2018
 **/

#include <stdio.h>
#define ASCII_LOWER 32
#define ASCII_UPPER 126
#define ASCII_RANGE 94

int main(void)
{
    char c = 0;
    int frequencyOfASCIIChars[ASCII_RANGE] = {0};

    while ((c = getchar()) != EOF)
    {
        frequencyOfASCIIChars[c - ASCII_LOWER]++;
    }

    for (int i = 0; i < sizeof(frequencyOfASCIIChars) / sizeof(frequencyOfASCIIChars[0]); i++)
    {
        putchar('\n');
        printf("%c|", i + ASCII_LOWER);
        for (int j = 0; j < frequencyOfASCIIChars[i]; j++)
        {
            putchar('*');
        }
    }
    putchar('\n');
    return 0;
}