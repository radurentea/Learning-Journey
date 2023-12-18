// Exercise 1-3.Modify the temperature conversion program to print a heading above the table.

#include<stdio.h>

// print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300; floating-point version

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; // lower limit of temperature scale
    upper = 300; // upper limit
    step = 20;

    fahr = lower;
    printf("Fahr\tCelsius\n");
    while(fahr <= upper)
    {
        celsius = (5.0f / 9.0f) * (fahr - 32.0f);
        printf("%4.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}