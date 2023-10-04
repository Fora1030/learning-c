#include <stdio.h>
#include <inttypes.h> // needed for declaring variable sizes for example uint16_t and int16_t
#include <float.h> // needed for FLT_MIN and FLT_MAX

int main( void )  {
  uint16_t biggest  = UINT16_MAX;
  uint16_t overflow = biggest + 1;

  // overflow occurs when adding 1 or more to the biggest number possible
  // in a 16 bit integer. The result of the overflow is 0 because the number can not be represented
  printf( "Biggest=%d and overflow=%d\n",biggest , overflow );
  
  int16_t  smallest  = INT16_MIN;
  int16_t  underflow = smallest - 1;
  
  // in a signed integer underflow occurs when subtracting 1 from the smallest integer possible
  // the result is a positive number because the sign bit becomes 1
  printf( "Smallest=%d and underflow=%d\n" , smallest , underflow );
  
  float    fBiggest  = FLT_MAX;
  float    fOverflow = fBiggest * 2;
  
  // in float numbers overflow is represented as inf because the number can not be displayed
  printf( "FloatBiggest = %g FloatOverflow (FloatBiggest * 2) = %g\n" , fBiggest , fOverflow );
  
  float    fSmallest  = FLT_MIN;
  float    fUnderflow = fBiggest / fSmallest;
  printf( "FloatSmallest = %g FloatUnderflow (FloatBiggest/FloatSmallest) = %g\n", fSmallest , fUnderflow );
  return 0;
}