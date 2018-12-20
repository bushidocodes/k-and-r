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