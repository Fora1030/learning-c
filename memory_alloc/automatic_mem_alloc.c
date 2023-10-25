#include <stdio.h>

double doSomething(double x, double y);

int main(void)
{
    printf("Value: %f", doSomething(2.5, 10));

    return 0;
}

double doSomething(double x, double y)
{
    double d1 = x;
    double d2 = 0.0 ;
    int    n1 = y;
    int    n2 = y * 10 ;
    for( int i = 1; i < n1 ; i++ ) {
        for( int j = 1; j < n2 ; j++  ) {
            d1 = i / j;
            d2 += d1;
            printf("local value: %f\n", d2);
        }
    }
    // variables i and j are destroy after the iteration of the for loop is complete
    // printf("variables local to the for loops i {%i}, j {%i}",i,j);

    return d2;
}