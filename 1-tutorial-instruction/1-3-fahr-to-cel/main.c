#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temp table */
    upper = 300; /* upper limit of temp table */
    step = 20;   /* step size */

    fahr = lower;
    printf("Temperature Table\n");
    printf("Fahrenheit\tCelsuis\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0fF*\t\t%6.1fC*\n", fahr, celsius);
        fahr += step;
    }
}