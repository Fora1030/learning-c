#include <stdio.h>

int weight;
int height; 
int thickness;
int* pMeasurement = &weight;

int main(void)
{
    printf("not value assigned: %i\n",*pMeasurement);
    *pMeasurement = 20;
    printf("%i after assigning value to pointer\n",*pMeasurement);
    weight = 30;
    printf("%i after assigning value to variable",*pMeasurement);
    return 0;
}