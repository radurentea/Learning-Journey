// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
// more blanks by a single blank. 

#include <stdio.h>

int main()
{
    int c;
    int count;

    count = 0;

    while((c = getchar()) != EOF)
    {
        if(c != ' ')
        {
            if(count > 0){
                printf(" ");
                count = 0;
            }
            putchar(c);
        } else if (c == ' ') 
        {
            ++count;
        }
    }
}