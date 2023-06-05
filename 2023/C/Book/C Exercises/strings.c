#include<stdio.h>
#include<string.h>

int main()
{
    char Kid1[12];
    // Kid1 can hold an 11-character name
    // Kid2 will be 7 characters(Maddie plus null 0)
    char Kid2[] = "Maddie";
    // Kid3 is also 7 characters, but specifically defined
    char Kid3[7] = "Andrew";
    // Hero1 will be 7 characters (adding null 0!)
    char Hero1[] = "Batman";
    // Hero2 will have extra room just in case
    char Hero2[34] = "Spiderman";
    char Hero3[25];

    Kid1[0] = 'K'; // Kid1 is being defined character-by-character
    Kid1[1] = 'a'; // Not efficient, but it does the work
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0'; // Never forget the null 0 so C knows when the string ends

    strcpy(Hero3, "The Incredible Hulk");

    printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
    printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
    printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);

    return 0;
}
