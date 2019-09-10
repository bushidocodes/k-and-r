#include <limits.h>
#include <stdio.h>

/**
 * K&R Exercise 2-1
 * Page 36
 * Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you computer them: determine the ranges of the various floating-point types;
 * Completed 9/20/19
 **/

int main(void)
{
    printf("Signed Chars store between %d and %d\n", CHAR_MIN, CHAR_MAX);
    printf("Unsigned Chars store between %u and %u\n", 0, UCHAR_MAX);
    printf("Signed Shorts store between %hd and %hd\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned Shorts store between %hu and %hu\n", 0, USHRT_MAX);
    printf("Signed Ints store between %d and %d\n", INT_MIN, INT_MAX);
    printf("Unsigned Ints store between %u and %u\n", 0, UINT_MAX);
    printf("Signed Longs store between %li and %li\n", LONG_MIN, LONG_MAX);
    printf("Unsigned Longs store between %lu and %lu\n", 0, ULONG_MAX);
    return 0;
}