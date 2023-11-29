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

    while((ch = getopt(argc, argv, "i:o:z:h?")) != -1){
        printf("argument [%c]", ch);
        printf(" value [%s]\n", optarg);
    }
}