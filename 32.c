#include<stdio.h>

int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter 3 numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    avg = (float) sum/3;
    printf("Sum = %d\n",sum);
    printf("Average =  %.2f\n",avg);

    return 0;
}
