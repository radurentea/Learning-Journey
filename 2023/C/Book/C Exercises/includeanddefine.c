#include<stdio.h>
#include<string.h>
#include"Chapter7ex1.h"

int main()
{
    int age;
    char childname[14] = "Thomas";

    printf("\n%s have %d kids.\n", FAMILY,KIDS);

    age = 11;
    printf("The oldest, %s, is %d.\n", childname, age);
    strcpy(childname, "Cristopher");
    age = 6;
    printf("The middle boy %s, is %d.\n", childname, age);

    age = 3;
    strcpy(childname, "Benjamin");
    printf("The youngest, %s is %d.\n", childname, age);

    return 0;
}
