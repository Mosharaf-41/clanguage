#include<stdio.h>

int main()
{
    char upper;
    printf("Enter any Uppercase letter : ");
    scanf("%c",&upper); // A=65

    printf("The lowercase letter : %c\n",upper+32); // a=97
    return 0; //(A+32)=(65+32)=97=a
}
