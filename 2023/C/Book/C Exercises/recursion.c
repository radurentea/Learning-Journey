#include<stdio.h>

void printString(const char* str)
{
    if(*str == '\0')
    {
        return ; // Base case: end of string
    }

    printf("%c : %d \n", *str, str); // Print the current character
    printString(str + 1); // Recursive call with the next character
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Printing the string recursively:\n");
    printString(str);

    return 0;
}

// Print all the letters of a string using recursion


