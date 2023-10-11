#include <stdio.h>
#include <stdbool.h>

void usingSwitch(void);

void usingIfElse(void);

int main(void) 
{

    usingIfElse();
    usingSwitch();
    return 0; 
}

void usingIfElse(void) 
{
    bool condition1 = true;
    bool condition2 = false;
    
    if (condition1) 
        printf("COndition one is true\n");
    else 
        printf("condition 1 is false\n");
    
    if ((condition1 == true) && (condition2 == false)) 
        printf("COndition one is true and condition two is false\n");
    else
        printf("Either condition 1 is false or condition 1 is true\n");
}

void usingSwitch(void)
{
    // using switch for program flow   
    printf("Using switch to create a menu\n");
    printf("1. print `Hello world`\n");
    printf("2. Enter your name! and get a response\n");
    int response;
    scanf("%d", &response);
    switch (response)
    {
        case 1:
            printf("Hello world\n");
            break;
        
        case 2:
            printf("enter your name: ");
            char user_name;
            scanf("%c", &user_name);
            printf("\n%c! Thanks for testing this program! ", user_name);
        default:
            break;
    }

}