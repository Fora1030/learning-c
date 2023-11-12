#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "linklist.h"



int main(void){
    LinkedList* = CreateLinkedList()
    InsertNodeToFront()
    return 0;
}
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

void InsertNodeToFront(LinkedList* pList, ListNode* pNode){
    ListNode* pNext = pList -> pFirstNode;
    pList->pFirstNode = pNode;
    pNode->pNext = pNext;
    pList->nodeCount++;

}
void InsertNodeToBack(LinkedList* pList, ListNode* pNode) {
    if (IsEmpty(pList)) {
        pList->pFirstNode = pNode;

    } else {
        ListNode* pCurr = pList->pFirstNode;
        while( NULL != pCurr->pNext){
            pCurr = pCurr->pNext ;
        }
        pCurr->pNext = pNode;
    }
    pList->nodeCount++;
}