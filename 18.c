#include<stdio.h>

int main()
{
    char lower,upper;
    printf("Enter any Uppercase letter : ");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("The lowercase letter = %c", lower);
    return 0;
}
