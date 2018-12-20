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