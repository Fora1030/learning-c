#include <stdlib.h>
#include <stdio.h>

int main (void){

    int *array;
    int size = 4;

    array = (int*) malloc(size*sizeof(int));
    printf("Allocated memory size %i\n", sizeof(array));

    for (int i = 0; i < size;i++){
        array[i] = i + 4;
    }
    printf("Array [");
    for (int i = 0; i < size;i++){
        printf("%d, ",array[i]);
    }
    printf("]");

    return 0;
}