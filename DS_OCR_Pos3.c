#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
     
    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

int LastOccur(PNODE Head, int no)
{
    PNODE temp = Head;  
    int Position = 1; 
    int lastPos = -1;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            lastPos = Position;
        }
        temp = temp->next;   
        Position++;
    }
    return lastPos;
    
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 24);
    InsertFirst(&first, 21);
    InsertFirst(&first, 62);
    InsertFirst(&first, 112);
    InsertFirst(&first, 21);

    iRet = LastOccur(first,21);

    printf("last Occurence Position is : %d",iRet);

    return 0;
}