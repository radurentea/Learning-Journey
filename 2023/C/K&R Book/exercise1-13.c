/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>

#define IN 1 // State when inside word
#define OUT 0 // State when outside word
#define MAX_WORDS 10 // Maximum number of words to process
#define MAX_WORD_LENGTH 50 // Maximum length of a single word

int main(void)
{
    int inputChar;
    int currentWordLength = 0;
    int wordState = OUT;
    int maxLengthOfWord = 0;
    int wordLengthsArray[MAX_WORDS];
    int wordCount = 0;
    int isWordLimitExceeded = 0;
    int isWordLengthExceeded = 0;

    // Loop to read characters until EOF
    while ((inputChar = getchar()) != EOF && !isWordLimitExceeded && !isWordLengthExceeded)
    {
        // Check for whitespace characters
        if(inputChar == ' ' || inputChar == '\t' || inputChar == '\n')
        {
            // End of word
            if(wordState == IN)
            {
                wordState = OUT;

                if(currentWordLength > MAX_WORD_LENGTH)
                {
                    isWordLengthExceeded = 1;
                    break;
                }
                
                wordLengthsArray[wordCount] = currentWordLength;

                // Update maximum word length if necessary
                if(currentWordLength > maxLengthOfWord)
                {
                    maxLengthOfWord = currentWordLength;
                }

                currentWordLength = 0;

                // Increment word count, ensuring it doesn't exceed MAX_WORDS
                if(wordCount < MAX_WORDS - 1)
                {
                    ++wordCount;
                }
                else if (wordCount == MAX_WORDS - 1)
                {
                    wordCount = MAX_WORDS;
                }
                else 
                {
                    isWordLimitExceeded = 1;
                    break;
                }
            }
        }
        else
        {
            // Inside a word
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

    // Handle special cases
    if (isWordLimitExceeded)
    {
        printf("Word limit exceeded. Only the first %d words are processed.\n", MAX_WORDS);
    }
    else if(isWordLengthExceeded)
    {
        printf("Word length limit exceeded. Words longer than %d characters are not processed.\n", MAX_WORD_LENGTH);
    }
    else
    {
        // Handle the last word if the input ended mid-word
        if(wordState == IN && wordCount < MAX_WORDS)
        {
            wordLengthsArray[wordCount++] = currentWordLength;

            // Update maximum word length for the last word
            if (currentWordLength > maxLengthOfWord)
            {
                maxLengthOfWord = currentWordLength;
            }
        }
    }
    

    // Printing top elements for words with maxium length
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

    // Printing the histogram for each word
    for(int heightIndex = maxLengthOfWord; heightIndex > 0; --heightIndex)
    {
        for(int wordIndex = 0; wordIndex < wordCount; ++wordIndex)
        {
            // Print bars or spaces depending on word length
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