#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>     // for getopt
#include <sys/errno.h>  // for errno
#include <ctype.h>

#include "nameList.h"


enum { kStringMax = 80 };


void  usage(   char * cmd );
int   getName( FILE* inFileDesc , char* pStr );
void  putName( char* pStr ,       FILE* outFileDesc );
int   trimStr( char* pStr );


int main(int argc, char *argv[]) {
  int   ch;
  FILE* inputFile  = NULL;
  FILE* outputFile = NULL;
  
  while( ( ch = getopt( argc , argv , "i:o:h" ) ) != -1 )  {
    switch (ch)  {
      case 'i':
        if( NULL == ( inputFile = fopen( optarg , "r") ) )  {
          fprintf( stderr, "input file \"%s\": %s\n", optarg, strerror(errno));
          exit( EXIT_FAILURE );
        }
        fprintf( stderr , "Using \"%s\" for input.\n" , optarg );
        break;
      case 'o':
        if( NULL == ( outputFile = fopen( optarg , "w" ) ) )  {
          fprintf( stderr, "output file \"%s\": %s\n", optarg, strerror(errno));
          exit( EXIT_FAILURE );
        }
        fprintf( stderr , "Using \"%s\": for output.\n" , optarg );
        break;
      case '?':
      case 'h':
      default:
        usage( argv[0] );
        break;
    }
  }
  
  if( !inputFile )  {
    inputFile = stdin;
    fprintf( stderr , "Using stdin for input.\n" );
  }
  
  if( !outputFile )  {
    outputFile = stdout;
    fprintf( stderr , "Using stdout for output.\n" );
  }
  
  char     nameBuffer[ kStringMax ];
  NameList nameList = {0};
  
  while( getName( inputFile , nameBuffer ) )  {
    AddName( &nameList , nameBuffer );
  }

  PrintNames( outputFile , &nameList );
  DeleteNames( &nameList );
  
  fprintf( stderr , "Closing files.\n" );
  fclose(  inputFile );
  fflush(  outputFile );
  fclose(  outputFile );
  return 0;
}


void usage( char* cmd )
{
  fprintf( stderr , "usage: %s [-i inputFileName] [-o outputFileName]\n" , cmd );
  fprintf( stderr , "       If -i inputFileName is not given, stdin is used.\n" );
  fprintf( stderr , "       If -o outputFileName is not given stdout is used.\n\n" );
  exit( EXIT_SUCCESS );
}

int getName( FILE* inFileDesc , char* pStr )  {
  static int numNames = 0; 
         int len;

  memset( pStr , 0 , kStringMax );

  if( stdin == inFileDesc )
    fprintf( stdout , "Name %d: ", numNames+1 );

  fgets( pStr , kStringMax , inFileDesc );
  
  len = trimStr( pStr );

  if( len ) numNames++;
  return len; 
}


void putName( char* pStr , FILE* outFileDesc )  {
  fputs( pStr , outFileDesc );
  fputc( '\n' , outFileDesc );
}
int trimStr( char* pString )  {
  size_t first , last , lenIn , lenOut ;
  first = last = lenIn = lenOut = 0;
  
  lenIn = strlen( pString );
  char tmpStr[ lenIn+1 ];
  strcpy( tmpStr , pString );
  char* pTmp = tmpStr;
  
  while( isspace( pTmp[ first ] ) )
    first++;
  pTmp += first;

  lenOut = strlen( pTmp );
  if( lenOut )  {
    last = lenOut-1;
    while( isspace( pTmp[ last ] ) )
      last--;
    pTmp[ last+1 ] = '\0';
  }
  lenOut = strlen( pTmp ); 
  if( lenIn != lenOut )
    strcpy( pString , pTmp );
  return lenOut;
}
