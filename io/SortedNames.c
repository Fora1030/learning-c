#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum {
    kListMax = 100,
    kStringMax = 80
};

typedef char string [kStringMax];

void addName(string* names, string newOne, int* listSize);

void printNames(string* names, int listSize);

void removeNewline(string s){
    int len = strlen(s);
    s[len-1] = '\0';
}

int getName(char* buf, int size) {
    if(fgets(buf, size, stdin)){
        int len;
        for(len=0; len < size; len++){
            if('\n' == buf[len]) {
                buf[len] = '\0';
                break;
            }

            if ('\0' == buf[len]) break;
        }
        return len;
    } else {
        return 0;
    }
}

int main(void) {
    string newName;
    string nameList[kListMax];
    int numNames = 0;

    while(
        printf("Name: %d ", numNames+1),
        fgets(newName, kStringMax, stdin),
        removeNewline(newName),
        strlen(newName) > 0
    ) {
        addName(nameList, newName, &numNames);
    }
    printNames(nameList, numNames);
    return 0;
}

void addName(string* names, string newName, int* pNumEntries) {
    if(*pNumEntries >= kListMax) {
        puts("List is FUll");
        return;
    } else {
        int k = 0;
        bool found = false;
        while (!found && k < *pNumEntries) {
            found = (strcmp(newName, names[k++]) < 0);
            printf("%d\n",strcmp(newName, names[k]));
        }

        if(found) {
            k--;
            for(int j = *pNumEntries; j > k; j--) {
                strcpy(names[j], names[j-1]);
            }
        }

        strcpy(names[k], newName);
        (*pNumEntries)++;
    }
    return;
}

void printNames(string *names, int numEntries) {
    printf("\nNumber of entries: %d\n\n", numEntries);
    for(int i = 0; i < numEntries; i++) {
        fputs(names[i], stdout);
        fputc('\n', stdout);
    }
}