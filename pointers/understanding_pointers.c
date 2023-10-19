#include <stdio.h>

int weight;
int height; 
int thickness;
int* pMeasurement = &weight;

void voidPointers()
{
    int x = 10;
    int y = 1;
    void* aPtr = NULL;
    void* aPtr_2 = NULL;
    aPtr = &x;
    aPtr_2 = &y;
    // int h = *(int*)aPtr;
    printf("x = [%d]\n", x);
    printf("*(int*)aPtr = [%d]\n",  *(int*)aPtr);
    // printf("h = [%d]\n",  h);
    // printf("sizeof(x) = [%lu]\n", sizeof( h));
    printf("sizeof(*(int*)aPtr) = [%lu]\n", sizeof( *(int*)aPtr));
    printf("sizeof(*(int*)aPtr) = [%lu]\n", sizeof( *(int*)aPtr));
    *(int*)aPtr = 3;
    printf("*(int*)aPtr = [%d]\n",  *(int*)aPtr);
    printf("x = [%d]\n", x);
    printf("pointer of x = [%p]\n", aPtr);
    printf("pointer of y = [%p]\n", aPtr_2);
    printf(" values of x + y = [%d]\n", (*(int*)aPtr + *(int*)aPtr_2));

}

int main(void)
{
    printf("not value assigned: %i\n",*pMeasurement);
    *pMeasurement = 20;
    printf("%i after assigning value to pointer\n",*pMeasurement);
    weight = 30;
    printf("%i after assigning value to variable\n",*pMeasurement);
    printf("pointer address: %p\n",*pMeasurement);

    voidPointers();
    return 0;
}

