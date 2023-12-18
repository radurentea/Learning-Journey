#include<stdio.h>

// copy input to output; 1st version

// int main()
// {
//     int c;

//     c = getchar();
//     while(c != EOF)
//     {
//         putchar(c);
//         c = getchar();
//     }
// }

int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        putchar(c);
    }
}