#include <stdio.h>

void printDistance(double);

int main (void) 
{
    double feet = 5280.00;

    printf("feet = %5.4g\n\n", feet);

    printDistance(feet);

    return 0;
}

void printDistance(double f)
{
    printf("The distance in feet is %5.3g\n", f);

    double yard_distance = f / 3.0;

    printf("The distance in feet is %5.3g\n", yard_distance);

}