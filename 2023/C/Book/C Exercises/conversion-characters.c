#include<stdio.h>

int main()
{
    printf("%d is an integer\n", 19);
    printf("%f is a floating point\n", 4.20);
    printf("%c is a character\n", 'R');
    printf("%s is a string\n", "Radu is boss");
    printf("%d roses cost %.2f per %d\n", 24, 19.93, 19);
    printf("%f %.3f %.2f %.1f\n", 4.5678, 4.5678, 4.5678, 4.5678); // 4.567800 4.568 4.57 4.6

    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces    \b\b\b\b can be fixed with the ");
    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
    printf("%s %c.","You are kicking butt learning", 'C');
    printf("You just finished chapter %d.\nYou have finished ", 4);
    printf("%.1f%c of the book.\n", 12.500, '%');
    printf("\n\nOne third equals %.2f or ", 0.333333);
    printf("%.3f or %.4f or ", 0.333333, 0.333333);
    printf("%.5f or %.6f\n\n\n", 0.333333, 0.333333);

    return 0;
}
