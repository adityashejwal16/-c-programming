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

void DisplayOdd(PNODE Head)
{
    PNODE temp = Head;   

    while(temp != NULL)
    {
        if(temp->data % 2 != 0)
        {
            printf("%d\n", temp->data);  
        }
        temp = temp->next;   
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 24);
    InsertFirst(&first, 21);
    InsertFirst(&first, 62);
    InsertFirst(&first, 112);

    DisplayOdd(first);

    return 0;
}