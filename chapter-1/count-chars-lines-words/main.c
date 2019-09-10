#include <stdio.h>
#include "globals.h"

int mygetline(void);
void copy(void);

void main(void)
{
    int len;
    max = 0;
    while ((len = mygetline()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }
    if (max > 0)
        printf("%s", longest);
}

int mygetline(void)
{
    int i, c;
    for (i = 0;
         i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n';
         i++)
    {
        line[i] = c;
    }

    if (c == '\n')
    {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}

void copy(void)
{
    int i = 0;
    while ((longest[i] = line[i]) != '\0')
        i++;
}