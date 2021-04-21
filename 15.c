#include<stdio.h>

int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower); // a=97

    printf("The uppercase letter : %c\n",lower-32); // A=65
    return 0; //(a-A)=(97-65)=32
}
