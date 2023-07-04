#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];

    hasUpper = hasLower = hasDigit = 0;

    printf("What is your username? ");
    scanf(" %s", user);

    printf("Please create a password: ");
    scanf(" %s", password);

    for(i=0;i<strlen(password);i++)
    {
        if(isdigit(password[i]))
        {
            hasDigit = 1;
            continue;
        }
        if(isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }
        if(islower(password[i]))
        {
            hasLower =1;
        }
    }

    if((hasDigit)&&(hasUpper)&&(hasLower))
    {
        printf("\n\nExcellent work, %s,\n", user);
        printf("Your password has upper and lowercase");
        printf("letters and a number.");
    } else
    {
        printf("\n\nYou shouldconsider a new password, %s,\n",user);
        printf("One that uses upper and lowercase letters ");
        printf("and a number");
    }
    return (0);
}
