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