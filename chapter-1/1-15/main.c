/**
 * K&R Exercise 1-15
 * Page 27
 * Rewrite the temperature conversion program of Section 1.2 to use a function for conversion
 * Completed 12/20/2018
 **/

#include <stdio.h>

float fahrToCelcius(float fahr);

int main()
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
        printf("%3.0fF*\t\t%6.1fC*\n", fahr, celsius);
        celsius = fahrToCelcius(fahr);
        fahr += step;
    }
    return 0;
}

float fahrToCelcius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}