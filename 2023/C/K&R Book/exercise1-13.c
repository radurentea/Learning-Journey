/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_WORDS 10

int main(void)
{
    int inputChar, currentWordLength, wordState, maxLengthOfWord;
    int wordLengthsArray[MAX_WORDS];
    int wordCount;

    currentWordLength = wordCount = maxLengthOfWord = 0;
    wordState = OUT;

    while ((inputChar = getchar()) != EOF)
    {
        if(inputChar == ' ' || inputChar == '\t' || inputChar == '\n')
        {
            if(wordState == IN)
            {
                wordState = OUT;
                wordLengthsArray[wordCount] = currentWordLength;
                if(currentWordLength > maxLengthOfWord)
                {
                    maxLengthOfWord = currentWordLength;
                }
                currentWordLength = 0;

                if(wordCount < MAX_WORDS - 1)
                {
                    ++wordCount;
                }
                else if (wordCount == MAX_WORDS - 1)
                {
                    wordCount = MAX_WORDS;
                }
                
            }
        }
        else
        {
            if(wordState == OUT)
            {
                wordState = IN;
                currentWordLength = 1;
            }
            else
            {
                ++currentWordLength;
            }
        }
    }


    // Handle the last word
    if(wordState == IN && wordCount < MAX_WORDS)
    {
        wordLengthsArray[wordCount++] = currentWordLength;
        if (currentWordLength > maxLengthOfWord)
        {
            maxLengthOfWord = currentWordLength;
        }
    }

    // Printing top elements for those with maxium length
    for (int topIndex = 0; topIndex < wordCount; topIndex++)
    {
        if (wordLengthsArray[topIndex] == maxLengthOfWord)
        {
            printf("   __   ");
        } else {
            printf("        ");
        }
    }

    printf("\n");

    // Printing the histogram
    for(int heightIndex = maxLengthOfWord; heightIndex > 0; --heightIndex)
    {
        for(int wordIndex = 0; wordIndex < wordCount; ++wordIndex)
        {
            if (wordLengthsArray[wordIndex] >= heightIndex)
            {
                if(wordLengthsArray[wordIndex] == 1)
                {
                    printf("  |__|  ");
                    --wordLengthsArray[wordIndex];
                }
                else
                {
                    printf("  |  |  ");
                    --wordLengthsArray[wordIndex];
                }
                
            }
            else 
            {
                if((wordLengthsArray[wordIndex] + 1) == heightIndex)
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