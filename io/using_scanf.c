#include <stdio.h>

int main (void) {
    int     anInteger   = -1;
    double  aDouble     = -1.0;
    int  numScanned = 0;

    printf( "Enter an integer and a decimal number: " );
    numScanned =  scanf( "%d%lf" , &anInteger , &aDouble );
    printf("scanf() was able to assign %d value(s)\n", numScanned);
    printf( "1. integer:  %d\n" , anInteger );
    printf( "2.  double:  %lf\n" , aDouble );
    return 0;    
}