#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two number : ");
    scanf("%d %d", &num1,&num2);
    printf("Numbers are : %d %d\n", num1,num2);

    float num3,num4;
    printf("Enter two float number : ");
    scanf("%f %f", &num3,&num4);
    printf("Numbers are : %.1f %.1f\n", num3,num4);

    int num5;
    float num6;
    printf("Enter a integer and a float number : ");
    scanf("%d %f", &num5,&num6);
    printf("Numbers are : %d %.1f\n", num5,num6);
    return 0;
}
