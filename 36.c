//F = ( C * 1.8) +32
#include<stdio.h>

int main()
{
    float C,F;
    printf("Enter Centigrade: ");
    scanf("%f",&C);
    F = (C * 1.8 ) +32;
    printf("Fahrenheit %.2f",F);
    return 0;
}
