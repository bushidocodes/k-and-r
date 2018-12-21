/**
 * K&R Exercise 1-4
 * Page 13
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 * Completed 12/18/18
 **/

#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temp table */
    upper = 300; /* upper limit of temp table */
    step = 20;   /* step size */

    celsius = lower;
    printf("Temperature Table\n");
    printf("Celsius\t\tFahrenheit\n");
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%3.0f* C\t\t%6.1f* F\n", celsius, fahr);
        celsius += step;
    }
}