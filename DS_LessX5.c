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

int CountLess(PNODE Head, int X)
{
    PNODE temp = Head;  
    int Count = 0; 
    

    while(temp != NULL)
    {
        if(temp->data < X)
        {
            Count++;
        }
        temp = temp->next;   
        
    }
    return Count;
    
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

    iRet = CountLess(first,62);

    printf("Less Than Number is : %d",iRet);

    return 0;
}