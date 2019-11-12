#include <stdio.h>
#include <string.h>

/**
 * K&R Exercise 2-3
 * Page 46
 * Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
 * Completed
 **/

int htoi(char *s)
{
    int result = 0;
    char c;
    for (int i = 0; i < strlen(s); i++)
    {
        c = s[i];
        printf("%c", c);
        switch (c)
        {
        case 0xF:
            result += 1;
        case 0xE:
            result += 1;
        case 0xD:
            result += 1;
        case 0xC:
            result += 1;
        case 0xB:
            result += 1;
        case 0xA:
            result += 1;
        case 0x9:
            result += 1;
        case 0x8:
            result += 1;
        case 0x7:
            result += 1;
        case 0x6:
            result += 1;
        case 0x5:
            result += 1;
        case 0x4:
            result += 1;
        case 0x3:
            result += 1;
        case 0x2:
            result += 1;
        case 0x1:
            result += 1;
        case 0x0:
            break;
        default:
            return -1;
        }
    }
    return result;
}

int main(void)
{
    char s[] = {'\0xF', '\0'};
    printf("%d", htoi(s));
    return 0;
}