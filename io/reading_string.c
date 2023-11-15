#include <stdio.h>

enum { kBufferSize = 80 };

int main( void )  {
    char stringBuffer[ kBufferSize ] = {0};
    char stringBuffer2[ kBufferSize ] = {0};
    printf( "Enter a string: " );
    scanf(  "%s" , stringBuffer );
    printf( "Processed string: [%s]\n", stringBuffer );

    printf("Enter another string press enter (/) to complete string:");
    scanf("%[^/]", stringBuffer2);
    printf("String: [%s]\n", stringBuffer2);
    return 0;
}