#include <stdio.h>

int sumNviaGauss(int N);

int sumWhileLoop(int N);

int main(void) 
{   
    printf("Rresult of adding 100 = %d using Gauss method\n", sumNviaGauss(100));
    printf("Rresult of adding 100 = %d using while loop\n", sumWhileLoop(100));
    return 0;
}

int sumNviaGauss(int N) 
{
    int sum = 0;
    sum = N * (N + 1) / 2;
    return sum;
}

int sumWhileLoop(int N)
{
    int sum = 0;

    int num = 0;

    while(num < N) 
    {
        sum += (num +1);

        num++;
    }
    return sum;
}
