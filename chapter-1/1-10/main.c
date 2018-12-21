/**
 * K&R Exercise 1-10
 * Page 20
 * Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslack by \\. This makes tabs and backspaces visible in an unambiguous way.
 * Completed 12/20/18
 **/
#include <stdio.h>

int main(void)
{
    char c;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\t':
            putchar('\\');
            putchar('t');
            break;
        case '\b':
            putchar('\\');
            putchar('b');
            break;
        case '\\':
            putchar('\\');
            putchar('\\');
            break;
        default:
            putchar(c);
        }
    }
}