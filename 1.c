#include<stdio.h>
int increment()
{
     static int num = 1; //static variable
     num++;
     return num;
}
int main()
{
     int x =10, f_incr, s_incr; // local variable
     f_incr = increment(); //function call
     printf("%d ", f_incr);
     s_incr = increment(); //function call
     printf("%d ", s_incr);
     return 0;
}
