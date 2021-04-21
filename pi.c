#include <stdio.h>

int main()
 {
    const double PI = 3.14;
    printf("%f", PI);
    PI++; // This will generate an error as constants cannot be changed
    return 0;

}
