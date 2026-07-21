#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
   struct node *next; 
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PNODE *first, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof (NODE));

     newn -> data = No;
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

void DisplayReverse(PNODE Head)
{
    if(Head == NULL)
    {
        return;
    }

    DisplayReverse(Head->next);
    printf("%d -> ", Head->data);
}

int main()
{
    PNODE  first = NULL;

    InsertFirst(&first, 24);
    InsertFirst(&first, 21);
    InsertFirst(&first, 62);
    InsertFirst(&first, 112);
    InsertFirst(&first, 21);

    printf("Reverse Display : \n");
    DisplayReverse(first);

    return 0;
}