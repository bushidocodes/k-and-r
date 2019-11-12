#include <string.h>
#include <stdbool.h>
#include <stdio.h>

/**
 * K&R Exercise 2-4
 * Page 48
 * Write an alternate version of squeeze(s1, s2) that deletes each character from s1 that matches any character in the string s2
 * Completed
 **/

char *squeeze(char s1[], char s2[])
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    char buffer[s1_length];
    int buffer_length = 0;
    bool should_copy;

    for (int i = 0; i < s1_length; i++)
    {
        should_copy = true;
        for (int j = 0; j < s2_length; j++)
        {
            if (s1[i] == s2[j] && s1[i] != '\0')
            {
                should_copy = false;
                break;
            }
        }
        if (should_copy)
        {
            printf("%c - %c\n", s1[buffer_length], s1[i]);
            buffer[buffer_length] = s1[i];
            buffer_length++;
        }
    }
    buffer[buffer_length++] = '\0';
    printf("%s\n", buffer);
    printf("%d %d\n", strlen(s1), strlen(buffer));
    strncpy(s1, buffer, s1_length);
    return s1;
}

int main(void)
{
    printf("%s", squeeze("ABCDE", "BC"));
    return 0;
}