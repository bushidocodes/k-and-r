#include <stdio.h>
/**
 * K&R Exercise 2-10
 * Page 52
 * Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.
 * Completed
 **/

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

int main(void)
{
    printf("%c is now %c", 'C', lower('C'));
    return 0;
}