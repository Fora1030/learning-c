#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size = 5;

    printf("the size of int in C is %i\n", sizeof(int));
    // allocate memory for an array of integers using calloc
    array = (int *) calloc(size, sizeof(int)); // memory is allocated for and integer
    printf("dynamically allocated memory of the array is %i\n", sizeof(array));
    printf("Should be 20!\n");
    // NOTE: It is interesting that the size of int is 4 bytes,
    // so assuming  that calloc initializes 5 integers elements in the memory 
    // the sizeof the array or pointer to the initial location in memory 
    // Should be 20 (5 *4). However, the actual size of the the array is 8 bytes. 

    // after some googling this probably happened because sizeof returns the size of the 
    // pointer and the actual size of the allocated memory can only be known at run time.
    
    

    if (array == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    
    // There is no need to initialize elements 
    // since calloc initialized allocated memory to zero 
    printf("Values in the array allocated using calloc\n");
    for(int i = 100; i<106;i++){
        array[i-100] = i;
    }

    printf("[");
    for (int i =0;i<size;i++){
        printf("%d, ", array[i]);// adding integers to allocated memory
    }
    printf("]");
    printf("\n");

    //Free the allocated memory
    free(array);

    return 0;


}