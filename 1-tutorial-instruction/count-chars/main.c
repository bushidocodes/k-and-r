#include <stdio.h>
#include <stdbool.h>

int main()
{
    char c;
    int nc, nw, nl = 0;
    nl++; // Increment once to include the initial line
    bool inWord = false;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            inWord = false;
        }
        else if (!inWord)
        {
            inWord = true;
            ++nw;
        }
    }
    printf("\n\n********************************\n");
    printf("* Characters: %d\n", nc);
    printf("* Words: %d\n", nw);
    printf("* Lines: %d\n", nl);
    printf("********************************\n");
    return 0;
}