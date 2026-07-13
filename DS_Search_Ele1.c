#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->Next = *First;
        *First = newn;
    }
}

bool Search(PNODE Head, int No)
{
    PNODE temp = Head;

    while (temp != NULL)
    {
        if (temp->Data == No)
        {
            return true;
        }
        temp = temp->Next;
    }
    return false;
}


int main()
{
    PNODE First = NULL;
    bool bRet = false;

    InsertFirst(&First, 640); 
    InsertFirst(&First, 240); 
    InsertFirst(&First, 20);
    InsertFirst(&First, 230); 
    InsertFirst(&First, 110);

    bRet = Search(First, 240);   // number to search

    if (bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is NOT present\n");
    }

    return 0;
}
