/**
 * K&R Exercise 1-9
 * Page 20
 * Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
 * Completed 12/20/18
 **/
#include <stdio.h>

int main(void)
{
    char c;
    char lastChar;
    char *output;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || c != lastChar)
        {
            putchar(c);
        }
        lastChar = c;
    }
}