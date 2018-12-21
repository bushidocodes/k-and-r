/**
 * K&R Exercise 1-23
 * Page 34
 * Write a program to remove all comments from a C progrm. Don't forget to handle quoted strings and character constants properly. C comments do not nest.
 * Completed
 **/

#include <stdio.h>
#define MAXLINE 1000 /* max input line size */

int grabline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len;               /*current line length*/
    int max;               /*maximum length seen so far */
    char line[MAXLINE];    /*current input line*/
    char longest[MAXLINE]; /*longest line saved here*/

    max = 0;
    while ((len = grabline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) /*there was a line*/
    {
        printf("%s", longest);
    }
    return 0;
}

/* grabline: read a line into s, return length */
int grabline(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assuming to is big enough */
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}