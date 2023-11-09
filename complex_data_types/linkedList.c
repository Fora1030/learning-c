#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "linklist.h"



void OutOfStorage(void){
    fprintf(stderr, "## FATAL RUNTIME ERROR ## NO MEMORY AVAILABLE");
    exit(EXIT_FAILURE);
}

LinkedList* CreateLinkedList() {
    LinkedList* pLL = (LinkedList*) calloc(1, sizeof(LinkedList));
    if(NULL == pLL) OutOfStorage();

    return pLL;
}

bool IsEmpty(LinkedList* pList) {
    return(0 == pList -> nodeCount);
}

int Size(LinkedList* pList) {
    return pList -> nodeCount;
}