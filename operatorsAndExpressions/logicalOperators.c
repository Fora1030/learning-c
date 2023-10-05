#include <stdio.h>
// C converts any zero value into the Boolean False, and any non zero value to True
#include <stdbool.h> // However this library is used for the official boolean values

void usingAND(bool z, bool o);

void printLogicalOR( bool z, bool o );

void printLogicalXOR( bool z, bool o );

void printLogicalNOT( bool z, bool o );

int main(void) 
{   
    bool one = 1;
    bool zero = 0;

    // printing truth tables 
    usingAND(zero, one);
    printLogicalOR(zero, one);
    printLogicalXOR(zero, one);
    printLogicalNOT(zero, one);

    return 0;
} 

void usingAND(bool z, bool o)
{
    bool zero_zero = z && z ;
    bool zero_one  = z && o ;
    bool one_zero  = o && z ;
    bool one_one   = o && o ;
    printf( "AND | %1d | %1d\n"     , z , o );
    printf( " %1d | %1d | %1d \n"   , z , zero_zero , zero_one );
    printf( " %1d | %1d | %1d \n\n" , o , zero_one  , one_one );
}

void printLogicalOR( bool z, bool o )  {
  bool zero_zero = z || z ;
  bool zero_one  = z || o ;
  bool one_zero  = o || z ;
  bool one_one   = o || o ;
  printf( "OR | %1d | %1d\n"      , z , o );
  printf( " %1d | %1d | %1d \n"   , z , zero_zero , zero_one );
  printf( " %1d | %1d | %1d \n\n" , o , zero_one  , one_one );
}

void printLogicalXOR( bool z, bool o )  {
  bool zero_zero = z ^ z ;
  bool zero_one  = z ^ o ;
  bool one_zero  = o ^ z ;
  bool one_one   = o ^ o ;
  
  printf( "XOR | %1d | %1d\n"     , z , o );
  printf( "  %1d | %1d | %1d\n"   , z, zero_zero , zero_one );
  printf( "  %1d | %1d | %1d\n\n" , o , one_zero , one_one  );
  printf( "\n" );
}

void printLogicalNOT( bool z, bool o )  {
  bool not_zero = !z ;
  bool not_one = !o ;
  
  printf( "NOT \n" );
  printf( " %1d | %1d \n"   , z , not_zero );
  printf( " %1d | %1d \n\n" , o , not_one );
}