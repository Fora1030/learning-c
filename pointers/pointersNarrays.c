#include <stdio.h>


void traverse1(int size, int arr[]);



int main(void) 
{
    int array[5] = {1, 2, 3, 999, 5};
    
    printf("\nArrays location = %p, value = %i\n",(array), *(array));
    printf("\nArrays + 3 location = %p, value = %i\n",(array + 3), *(array+3));

    for(int i =0; i < 5; i++)
    {
       // the use of & before the variable returns the location in the memory for that object
        printf("&(array[%1d]) = %p, array[%1d] = %1d, i++\n", i, &(array[i]),i,array[i]);
    }

    return 0;
}

void traverse1(int size, int arr[])
{
    printf("\n(1) Function parameter is an array, ");
    printf("Using array notation");

    for(int i = 0; i < size;i++)
    {
        printf("&(arr[%1d]) = %p, arr[%1d] = %d\n", i, &(arr[i]), i, arr[i]);
    }
}
