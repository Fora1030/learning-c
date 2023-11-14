#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Usage( char* exec )  {
  printf( " usage: %s <argument1> <argument2> ... <argumentN>\n" ,exec );
  exit(1); 
}
int main(int argumentCount, char* argumentVector[]){

    if(1 == argumentCount) {
        printf("No Arguments given\n");
        Usage(argumentVector[0]);
        return 0;
    }


    printf("Arguments count = [%d]", argumentCount);
    for(int i = 1; i < argumentCount; i++){
        printf("Argument [%d] -> %s\n", i,argumentVector[i]);
    }
    return 0;
}