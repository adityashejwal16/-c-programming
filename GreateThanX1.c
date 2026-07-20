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

int DisplayGreater(PNODE Head, int X)
{
    PNODE temp = Head;  
    int Count = 0; 
    

    while(temp != NULL)
    {
        if(temp->data > X)
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
    InsertFirst(&first, 21);

     printf("value Greater Than 25 is \n");
     
    iRet = DisplayGreater(first,24);

    return 0;
}