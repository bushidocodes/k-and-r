/**
 * K&R Exercise 1-12
 * Page 21
 * Write a program that prints its input one word per line.
 * Completed
 **/

#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    char buffer[20] = "";
    char charToStr[2] = "";
    charToStr[1] = '\0';
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (strcmp(buffer, "") != 0)
            {
                printf("%s\n", buffer);
                strcpy(buffer, "");
            }
        }
        else
        {
            // I'm using charToStr to turn a char into a null terminated string.
            charToStr[0] = c;
            strcat(buffer, charToStr);
        }
    }
    // Final Flush of Buffer if Needed
    if (strcmp(buffer, "") != 0)
    {
        printf("%s\n", buffer);
        strcpy(buffer, "");
    }

    return 0;
}