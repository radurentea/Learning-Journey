/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_WORDS 10

int main(void)
{
    int c, wordLength, state, maxWordLength;
    int arr[MAX_WORDS];
    int i;

    wordLength = i = maxWordLength = 0;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(state == IN)
            {
                state = OUT;
                arr[i] = wordLength;
                if(wordLength > maxWordLength)
                {
                    maxWordLength = wordLength;
                }
                wordLength = 0;

                if(i < MAX_WORDS - 1)
                {
                    ++i;
                }
                
            }
        }
        else
        {
            if(state == OUT)
            {
                state = IN;
                wordLength = 1;
            }
            else
            {
                ++wordLength;
            }
        }
    }


    // Handle the last word
    if(state == IN)
    {
        arr[i++] = wordLength;
        if (wordLength > maxWordLength)
        {
            maxWordLength = wordLength;
        }
    }

    // Printing top elements for those with maxium length
    for (int l = 0; l < i; l++)
    {
        if (arr[l] == maxWordLength)
        {
            printf("   __   ");
        } else {
            printf("        ");
        }
    }

    printf("\n");

    // Printing the histogram
    for(int j = maxWordLength; j > 0; --j)
    {
        for(int k = 0; k < i; ++k)
        {
            if (arr[k] >= j)
            {
                if(arr[k] == 1)
                {
                    printf("  |__|  ");
                    --arr[k];
                }
                else
                {
                    printf("  |  |  ");
                    --arr[k];
                }
                
            }
            else 
            {
                if((arr[k] + 1) == j)
                {
                    printf("   __   ");
                }
                else 
                {
                    printf("        ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}