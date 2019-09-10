#include <stdio.h>
#include <string.h>
/**
 * K&R Exercise 2-5
 * Page 48
 * Write the function any(s1, s2), which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters form s2. (The stdlib function strpbrk does the same job but returns a pointer to the location)
 * Completed 9/10/19
 **/

int any(char s1[], char s2[])
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);

    for (int i = 0; i < s1_length; i++)
    {
        for (int j = 0; j < s2_length; j++)
        {
            if (s1[i] == s2[j] && s1[i] != '\0')
            {
                return i;
            }
        }
    }
    return -1;
}

int main(void)
{
    printf("%d \n", any("ABCDE", "Z"));
    printf("%d \n", any("ABCDE", "C"));
    return 0;
}