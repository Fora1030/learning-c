#include <stdio.h>
#include <stdlib.h>
int main( void )  {
  int     anInteger   = -1;
  double  aDouble     = -1.0;
  
  char sInteger[] = "1234" ;
  char sDouble[]  = "5678.9012";
  
  printf( "As strings: integer=\"%s\" double=\"%s\"\n" ,
          sInteger , sDouble );
  anInteger = atoi( sInteger );
  aDouble   = atof( sDouble );
  printf( "As values: integer=[%d] double=[%lf]\n\n" ,
           anInteger , aDouble );
  return 0;
}