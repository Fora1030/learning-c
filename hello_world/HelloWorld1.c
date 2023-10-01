// The purpose of this file is to understand the order of execution in C
#include <stdio.h>
#include <time.h>

// function prototypes
void printGreetings(char* greeting, char* name);

void printGreetingsWithTime(char* greeting, char* name);

int main() 
{
    printGreetings("Hello!", "Franklin");
    printGreetingsWithTime("Hi!", "Bob");
    return 0;
}

void printGreetings(char* greeting, char* name)
{
    printf("%s %s.\nThis message was printed from a function!\n", greeting, name);
}

void printGreetingsWithTime(char* greeting, char* name)
{
    time_t rawtime;
    struct tm * timeinfo;
    time (&rawtime);
    timeinfo = localtime (&rawtime);
    printf("%s %s The current time is %s", greeting, name,asctime (timeinfo));
}
