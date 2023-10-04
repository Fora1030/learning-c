#include <stdio.h>

int main (void)
{
    char lowerChar = 'a';
    printf("'a' = %d\n",(int)lowerChar);
    // result = 'a' = 97
    printf("'a - 32' = %c", lowerChar - 32);
    // result = 'a - 32' = A
    return 0;
}