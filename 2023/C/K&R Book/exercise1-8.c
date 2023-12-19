// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main()
{
    int c; 
    int spaces;
    spaces = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
            {
                ++spaces;
            }
    }
    printf("The number is: %d\n", spaces);
}