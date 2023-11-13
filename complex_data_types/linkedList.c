#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "linklist.h"



int main(void){
    // CreateLinkedList();
    printf("Compiled successfully");
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

ListNode* RemoveNodeFromFront(LinkedList* pList){
    if(NULL == pList->pFirstNode) {
        printf("The linked list is empty");
        return NULL;
    } else {
        ListNode* pCurr = pList->pFirstNode;
        pList->pFirstNode = pList->pFirstNode->pNext;
        pList->nodeCount--;
        return pCurr;
    }
}

ListNode* RemoveNodeFromBack(LinkedList* pList){
    if (IsEmpty(pList)) {
        return NULL;
    } else {
        ListNode* pCurr = pList->pFirstNode;
        ListNode* pPrev = NULL;

        while(NULL != pCurr->pNext){
            pPrev = pCurr;
            pCurr = pCurr->pNext;
        }

        pPrev->pNext = NULL;
        pList->nodeCount--;
        return pCurr;

    }
}

ListNode*  GetNode(LinkedList* pList, int pos){
    ListNode* pCurr = pList->pFirstNode;
    if(pCurr == NULL){
        return pList->pFirstNode;
    } else if (pos == 0) {
        return pList->pFirstNode;
    } else {
        int i =0;
        while(NULL != pCurr->pNext){
            if(i == pos){
                return pCurr;
            }
            i++;
            pCurr = pCurr->pNext;
        }
        return pCurr;
    }
}

ListNode* CreateNode(ListData* pData) {
    ListNode* pNewNode = (ListNode*) calloc(1, sizeof(ListNode));
    if (NULL == pNewNode) OutOfStorage();

    pNewNode->pData = pData;
    return pNewNode;
}

void DeleteNode(ListNode* pNode){
    free(pNode->pData);
    free(pNode);
}

void PrintList(LinkedList* pList, void(*printData)(ListData* pData)) {
    printf("List has %2d entries: [", Size(pList));

    ListNode* pCurr = pList->pFirstNode;
    while(NULL != pCurr){
        PrintNode(pCurr, printData);
        pCurr = pCurr->pNext;
    }
    printf("]\n");

}

void PrintNode(ListNode* pNode, void(*printData)(ListData* pData)) {
    printData(pNode->pData);

}