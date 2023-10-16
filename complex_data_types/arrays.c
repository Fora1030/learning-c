#include <stdio.h>
#include <math.h>
#define ARRAY_SIZE 10

int array[ARRAY_SIZE] = {0};


void sentinelControlLoop();

int main(void)
{

    sentinelControlLoop();

    return 0;
}

void sentinelControlLoop(){

    for(int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i;
    }

    printf("%f\n", pow(array[3], 2));
}
