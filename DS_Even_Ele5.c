#include<stdio.h>
#include<stdlib.h>

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

void DisplayEven(PNODE Head)
{
   
    PNODE temp = Head;

    while (temp != NULL)
    {
        if (temp->Data % 2 == 0)
        {
            printf("%d\t",temp->Data);
        }
        temp = temp->Next;
    }
}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 63); 
    InsertFirst(&First, 24); 
    InsertFirst(&First, 21);
    InsertFirst(&First, 27); 
    InsertFirst(&First, 63);

     DisplayEven(First);

    return 0;
}
