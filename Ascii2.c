#include <stdio.h>

int main()
{
    char ch = 'd';
    char capital = ch - 'a' + 'A';
    printf("Capital of  %c is %c\n", ch, capital);

    char capital2 = ch - 'f' + 'F';
    printf("Capital of  %c is %c\n", ch, capital2);
    return 0;
}
