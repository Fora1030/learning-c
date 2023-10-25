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

    int arrayStd[3][5] = { { 11 , 12 , 13 , 14 , 15 } , 
                         { 21 , 22 , 23 , 24 , 25 } ,
                         { 31 , 32 , 33 , 34 , 35 } };
    // Array of pointers.  
    int* arrayPtr[3] = { NULL };
        // Array sizes and pointer for pointer traversal.
    const int rows = 3;
    const int cols = 5;  
    int* pInteger;  
        // Sub-arrays.
    int array1[5]     = { 11 , 12 , 13 , 14 , 15 };
    int array2[5]     = { 21 , 22 , 23 , 24 , 25 };
    int array3[5]     = { 31 , 32 , 33 , 34 , 35 };
    arrayPtr[0] = array1;
    arrayPtr[1] = array2;
    arrayPtr[2] = array3;
    return 0;

}