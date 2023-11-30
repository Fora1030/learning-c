#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/errno.h>

void usage(char* cmd){
    fprintf(stderr, 
        "usage: %s [-i inputFName] [-o outputFName]\n", cmd
    );
    fprintf(stderr, 
        "If -i inputFName is not given, stdin is used.\n"
    );
    fprintf(stderr,
        "If -o outputFName is not given, stdout is used.\n\n"
    );
    exit(EXIT_SUCCESS);
}

int main(int argc, char *argv[]){
    int ch;
    FILE* inputFile = NULL;
    FILE* outputFile = NULL;

    while((ch = getopt(argc, argv, "i:o:h?")) != -1){
        switch (ch)  {
      case 'i':
        if( NULL == ( inputFile = fopen( optarg , "r") ) )  {
          fprintf( stderr, "input file \"%s\": %s\n", optarg, strerror(errno));
          exit( EXIT_FAILURE );
        }
        fprintf( stderr , "Using \"%s\" for input.\n" , optarg );
        break;
      case 'o':
        if( NULL == ( outputFile = fopen( optarg , "a" ) ) )  {
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
  
  fprintf( stderr , "Do work here.\n" );
  
  fprintf( stderr , "Closing files.\n" );
  fclose( inputFile );
  fflush( outputFile );
  fclose( outputFile );
  fprintf( stderr , "Done.\n" );
  return 0;
}