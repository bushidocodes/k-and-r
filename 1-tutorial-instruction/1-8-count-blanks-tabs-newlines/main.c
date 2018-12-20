#include <stdio.h>

int main(void)
{
    int blanks = 0, tabs = 0, newlines = 0;
    char c;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':
            newlines++;
            break;
        case '\t':
            tabs++;
            break;
        case ' ':
            blanks++;
            break;
        }
    }
    printf("\n***********************************\n");
    printf("*             Report              *\n");
    printf("***********************************\n");
    printf("Total \\n: %d\n", newlines);
    printf("Total \\t: %d\n", tabs);
    printf("Total ' ': %d\n", blanks);
}