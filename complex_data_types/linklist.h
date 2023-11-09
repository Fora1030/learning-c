#include <stdbool.h>

typedef struct _Node ListNode;
typedef int ListData;

typedef struct _Node {
    ListNode* pNext;
    ListData* pData;
} ListNode;

typedef struct 
{
    /* data */
    ListNode* pFirstNode;
    int nodeCount;
} LinkedList;

LinkedList* CreateLinkedList();

bool IsEmpty(LinkedList* pList);

int Size(LinkedList* pList);

void InsertNodeToFront(LinkedList* pList, ListNode* pNode);

void InsertNodeToBack(LinkedList* pList, ListNode* pNode);

ListNode* RemoveNodeFromFront(LinkedList* pList);

ListNode* RemoveNodeFromBack(LinkedList* pList);

ListNode* GetNode(LinkedList* pList, int pos);

ListNode* CreateNode(ListData* pData);

void DeleteNode(ListNode* pNode);

void PrintList(LinkedList* pList, void (*printData)(ListData* pData));

void PrintList(ListNode* pNode, void (*printData)(ListData* pData));

void OutOfStorage(void);


