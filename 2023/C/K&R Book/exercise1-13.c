/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>
#define IN 1
#define OUT 0
#define NONSPACE '-'

int main(void)
{
    int c, wordLength, state;
    int arr[10];
    int i;

    wordLength = 0;
    state = OUT;
    i = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
            if (wordLength > 0)
                {
                    arr[i] = wordLength;
                    ++i;
                }
            wordLength = 0;
        }
        else if(state == OUT)
        {
            ++wordLength;
            state = IN;
        }
        else if(state == IN)
        {
            ++wordLength;
        }
    }

    for(int j=0;j < i; ++j)
    {
        int length = arr[j];
        printf(" __\n");
        while(length > 1)
        {
            printf("|  |\n");
            --length;
        }
        printf("|__|\n\n");
    }

    return 0;
}