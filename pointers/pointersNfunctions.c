#include <stdio.h>

double RectPerimeter(double h, double w)
{
    h += 10.0;
    w += 10.0;
    return 2*(w+h);
}


double RectPerimeterWithPointers(double* pH, double* pW)
{
    *pH += 10.0;
    *pW += 10.0;
    return 2*(*pW+*pH);
}

int main (void)
{
    double h = 15.10;
    double w = 22.40;

    double perimeter = RectPerimeter(h, w);
    printf("A copy of the variables is passed to the function\n");
    printf("h = %f\tw= %f\tperimeter = %f\n", h,w,perimeter);

    double* pH = &h;
    double* pW = &w;

    printf("\n\nA reference of the variables is passed to the function\n");
    perimeter = RectPerimeterWithPointers(pH, pW);
    printf("h = %f\tw= %f\t perimeter = %f\n", h,w,perimeter);

    return 0;

}