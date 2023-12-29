/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input. */

#include <stdio.h>
#define MAX_CHARACTERS 100
#define SPACE '-'

int main(void) {
    int c;
    int arrChars[MAX_CHARACTERS];
    int arrCharsCount[MAX_CHARACTERS];
    int flagChar = 0;
    int count = 0;
    int maxUsedChar = 0;

    while((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            int i = 0;
            for(i = 0; i < MAX_CHARACTERS; i++) {
                if(c == arrChars[i]) {
                    ++arrCharsCount[i];
                    if(arrCharsCount[i] > maxUsedChar){
                        maxUsedChar = arrCharsCount[i];
                    }
                    flagChar = 1;
                    break;
                }
            }
            if(flagChar == 0) {
                if(i == MAX_CHARACTERS) {
                    arrChars[count] = c;
                    arrCharsCount[count] = 1;
                    count++;
                } else {
                    arrChars[i] = c;
                    arrCharsCount[i] = 1;
                    count++;
                }
            }
            flagChar = 0;
        }
    }

    printf("Max: %d\n", maxUsedChar);
    for(int j = maxUsedChar; j > 0; j--) {
        for(int i = 0; i < count; i++) {
            if(j == arrCharsCount[i]) {
                printf("_ ");
                --arrCharsCount[i];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    printf("\n");

    for(int i = 0; i < count; i++) {
        printf("%c ", arrChars[i]);
    }

    printf("\n");
        
    return 0;
}