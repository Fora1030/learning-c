#include <stdio.h>
#include <math.h>
#define ARRAY_SIZE 10

int array[ARRAY_SIZE] = {0};


void sentinelControlLoop();

int findMin(int size, int sampleArray[*]);

int findMax( int size, int sampleArray[*]);

double findMean(int size, int sampleArray[*]);

double findStdDev(int size, int sampleArray[*]);

int main(void)
{
    int sampleArray[] = { 3 , 4 , 6 , 8, 13 , 17 , 10 , 19 };
    printf("min = %i \n", findMin((sizeof(sampleArray)/ sizeof(int)), sampleArray));
    printf("max = %i \n", findMax((sizeof(sampleArray)/ sizeof(int)), sampleArray));
    printf("mean = %f \n", findMean((sizeof(sampleArray)/ sizeof(int)), sampleArray));
    printf("std = %f \n", findStdDev((sizeof(sampleArray)/ sizeof(int)), sampleArray));
    sentinelControlLoop();

    return 0;
}


int findMin(int size, int sampleArray[])
{
    int min = sampleArray[0];

    for (int i = 0; i < size; i++)
    {
        if (sampleArray[i] < min) min = sampleArray[i];

    }
    return min;
}

int findMax( int size, int sampleArray[])
{
    int max = sampleArray[0];

    for (int i = 0; i < size; i++) 
    {
        if (sampleArray[i] > max) max = sampleArray[i];
    }

    return max;
}

double findMean(int size, int sampleArray[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += sampleArray[i];
    }

    double mean = sum / size;

    return mean;
}

double findStdDev(int size, int sampleArray[])
{
    double mean = findMean(size, sampleArray);

    double sum = 0.0;
    double variance = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum += pow((sampleArray[i] - mean), 2);
    }
    variance = sum / size;
    double std = sqrt( variance);

    return std;
}

void sentinelControlLoop()
{

    for(int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i;
    }

    printf("%f\n", pow(array[3], 2));
}
