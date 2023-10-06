#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    bool condition1 = true;
    bool condition2 = false;
    
    if (condition1) 
        printf("COndition one is true");
    else 
        printf("condition 1 is false");
    
    if ((condition1 == true) && (condition2 == false)) 
        printf("COndition one is true and condition two is false");
    else
        printf("Either condition 1 is false or condition 1 is true");


    return 0; 
}