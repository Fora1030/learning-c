#include <stdio.h>

void printDistance(double);

int main (void) 
{
    double feet = 5280.00;

    printf("feet = %5.4g\n\n", feet);

    printDistance(feet);

    return 0;
}

void printDistance(double feet)
{
    printf("The distance in feet is %5.3g\n", feet);

    double yard_distance = feet / 3.0;

    printf("The distance in feet is %5.3g\n", yard_distance);

}