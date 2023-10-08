#include <stdio.h>

int sumNviaGauss(int N);

int sumWhileLoop(int N);

int sumForLoop(int N);

int sumDoWhile(int N);

int sumGoto(int N);

int main(void) 
{   
    printf("Rresult of adding 100 = %d using Gauss method\n", sumNviaGauss(100));
    printf("Rresult of adding 100 = %d using while loop\n", sumWhileLoop(100));
    printf("Rresult of adding 100 = %d using for loop\n", sumForLoop(100));
    printf("Rresult of adding 100 = %d using do While\n", sumDoWhile(100));
    printf("Rresult of adding 100 = %d using goto statements\n", sumGoto(100));
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

int sumForLoop(int N)
{
    int sum = 0;

    for(int num = 0; num < N; num++)
    {
        sum += (num + 1);
    }

    return sum;
}

int sumDoWhile(int N)
{
    int sum = 0; 
    int num = 0;

    do 
    {
        sum += (num + 1);
        num++;
    } while (num < N);

    return sum;
}

int sumGoto(int N)
{
    int sum = 0;

    int num = 0;

    start_loop:
        sum += (num + 1);
        num++;
        if ( num < N) goto start_loop;
    end_loop:
        return sum;
}