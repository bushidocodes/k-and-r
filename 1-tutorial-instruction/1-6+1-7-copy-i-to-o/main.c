#include <stdio.h>

/* 
* Writes all characters from the input device (keyboard) to the output device (screen)
*/
main()
{
    int c;

    // The declaration statement is nested in a conditional statement to DRY up the code
    while ((c = getchar()) != EOF) // getchar() returns EOF when there are no remaining characters
    {
        printf("c != EOF resolves to %d\n", c != EOF);
        putchar(c);
    }
    printf("The value of EOF:\t %d\n", c);
}