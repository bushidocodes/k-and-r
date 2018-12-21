/**
 * K&R Exercise 1-6
 * Page 17
 * Verify that the expression getchar() != EOF is 0 or 1.
 * Completed 12/18/18
 **/

#include <stdio.h>

int main(void)
{
    int c = 'a';
    printf("c != EOF resolves to %d\n", c != EOF);
    char c1 = EOF;
    printf("c != EOF resolves to %d\n", c1 != EOF);
}