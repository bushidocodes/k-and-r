/**
 * K&R Exercise 1-5
 * Page 14
 * Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
 * Completed 12/18/18
 **/

#include <stdio.h>

#define LOWER 0   /* Lower limit of the Temperature Table */
#define UPPER 300 /* Upper limit of the Temperature Table */
#define STEP 20   /* Step Size */

main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}