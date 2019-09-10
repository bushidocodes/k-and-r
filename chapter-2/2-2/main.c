#include <stdio.h>

/**
 * K&R Exercise 2-2
 * Page 42
 * Write a loop equivalent to the for loop above without using && or ||
 * Completed 9/10/19
 **/

int main(void)
{
    int lim = 10;
    char s[lim];
    char c;
    // for (int i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
    // {
    //     printf("%c\n", c);
    //     s[i] = c;
    // }
    for (int i = 0; i < lim - 1; i++)
    {
        c = getchar();
        if (c == '\n')
            break;
        if (c == EOF)
            break;
        printf("%c\n", c);
        s[i] = c;
    }

    printf("\a");
    return 0;
}