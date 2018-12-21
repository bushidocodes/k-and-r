/**
 * K&R Exercise 1-21
 * Page 34
 * Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
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