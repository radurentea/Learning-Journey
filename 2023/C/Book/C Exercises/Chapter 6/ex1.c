// Adding Words to Your Programs

/* C adds a zero to the end of every string. It has several names

    - Null zero
    - Binary zero
    - String terminator
    - ASCII 0
    - \0
*/

// char month[10];

#include <stdio.h>
#include<string.h>

int main()
{
    char month[10] = "January"; // Defines a character array

    printf("%s\n", month);

    // Changing the value of the array one element at a time

    month[1] = 'a';
    month[0] = 'M';
    month[2] = 'r';
    month[3] = 'c';
    month[4] = 'h';
    month[5] = '\0';

    printf("%s\n", month);

     // changing the value of the array with strcpy function

    strcpy(month, "August"); // Puts new string in month array

    printf(month);

    return 0;


}


