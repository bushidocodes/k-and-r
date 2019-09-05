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
    printf("Temperature Table\n");
    printf("Fahrenheit\tCelsuis\n");
    for (float fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%3.0f *F\t\t%6.1f *C\n", fahr, fahrToCelcius(fahr));
    }
    return 0;
}

float fahrToCelcius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}