// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. 

#include<stdio.h>

int main()
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 50;
    step = 5;
    celsius = lower;

    printf("Celsius\t\tFahr\n");
    while(celsius <= upper)
    {
        fahr = (celsius * (9.0f/5.0f)) + 32;
        printf("%7.0f%13.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}