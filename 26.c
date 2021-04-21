//write a program that takes two integer and display sum.
#include<stdio.h>

int main()
{
    int num1, num2, result;

    printf("Enter two numbers : ");
    scanf("%d%d",&num1, &num2);

    result = num1 + num2 ;
    printf("The sum is %d\n", result);

    result = num1 - num2 ;
    printf("The sum is %d\n", result);

    result = num1 * num2 ;
    printf("The Multi is %d\n", result);

    result = num1 / num2 ;
    printf("The div is %d\n", result);

    result = num1 % num2 ;
    printf("The remainder is %d\n", result);


    return 0;
}
