#include <stdio.h>

char charType(int returnSigned)
{
    // The purpose of this function is to better understand  
    // what theS char datatype is and how it is used in C

    // NOTE: Character storage and variable declaration 
    signed char myChar = 'F'; // Stores 'F' in a signed char variable
    unsigned char unsignedChar = 'R'; // Stores 'R' in a unsigned char variable

    // return 'FR'; 
    // When trying to return the char above the program did not compile 
    // I think that it might be because c does not auto recognize the data type 
    // based on the syntax the next solution is to return one of the variables above
    // return myChar; // Returning the variable of data type char works properly

    // adding boolean variables to return customize variable 
    if (returnSigned){
        return myChar;
    }
    
    if (!returnSigned){
        return unsignedChar;
    }
}

// Rational Numbers data types
float floatNumbers (float x) // float has total of 4 bytes
{
    float number_1;
    number_1 = x;
    return number_1;
}

double doubleNumbers (double y) // double numbers have a total of 8 bytes
{
    double number_2;
    number_2 = y;
    return number_2;
}

int main () 
{
    char result;
    double sumResult;
    float x;
    double y;
    x = floatNumbers(1);
    y =  doubleNumbers(3);
    sumResult = (x + y);
    result = charType(1);
    printf("result = %c\n", result);
    printf("float + double result = %lf", sumResult);
    // for some reason the result of the sum is not printed, 
    // I think might be the way that i am passing and assigning variables
    // the next chapter will cover variables and assignments 

    return 0;
}