#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%-#012.4hd\n", 20);
    printf("%#106.4hd\n", 20);

    printf("Unsigned Printf\n"
           "Base Base-8 Base-10 Base-16 BASE-16\n"
           "Name octal unsigned hexadecimal HEXADECIMAL\n"
           "Specifier %%12o %%12u %%12x %%12X \n"
    );
    int smallInt = 12;
    int largeInt = (1024*1024*3)+(1024*2)+512+128+64+32+16+8+4+2+1;
    int negativeInt = -smallInt;
    unsigned anUnsigned = 130;
    printf( " [%12o] [%12u] [%12x] [%12X]\n" ,smallInt , smallInt , smallInt , smallInt );
    printf( " [%12o] [%12u] [%12x] [%12X]\n\n" ,largeInt , largeInt , largeInt , largeInt );
    printf( " [%12o] [%12u] [%12x] [%12X]\n\n" , anUnsigned , anUnsigned , anUnsigned , anUnsigned );
    printf( " Specifier %%#o %%#u %%#x %%#X\n");
    printf( " [%#12o] [%12u] [%#12x] [%#12X]\n" ,smallInt , smallInt , smallInt , smallInt );
    printf( " [%#12o] [%12u] [%#12x] [%#12X]\n" ,largeInt , largeInt , largeInt , largeInt );
    printf( " [%#12o] [%12u] [%#12x] [%#12X]\n\n" ,anUnsigned , anUnsigned , anUnsigned , anUnsigned );
     printf( "Powers of 2: 2^0, 2^2, 2^4, 2^6, 2^8 , 2^10\n" );
    int k = 1;
    for( int i = 0 ; i < 6 ; i++ , k<<=2 )  {
    printf( " [%#12o] [%12u] [%#12x] [%#12X]\n" ,
            k , k , k , k );
    }
    printf( "\nPowers of 9: 9^1, 9^2, 9^3, 9^4\n" );
    printf( " Specifier %%12o %%12u %%12x %%12X \n" );
    k = 9;
    for( int i = 0 ; i < 5 ; i++ , k*=9 )  {
    printf( " [%#12o] [%12u] [%#12x] [%#12X]\n" ,
            k , k , k , k );
    }
    return 0;
}