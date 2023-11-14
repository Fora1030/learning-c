#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%-#012.4hd\n", 20);
    printf("%#106.4hd", 20);
    return 0;
}