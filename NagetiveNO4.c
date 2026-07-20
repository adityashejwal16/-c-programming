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

void ReplaceNegative(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp -> data < 0)
        {
            temp -> data = 0; // replace 0
        }
        temp = temp->next;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 24);
    InsertFirst(&first, -5);
    InsertFirst(&first, -62);
    InsertFirst(&first, 112);
    InsertFirst(&first, 20);

    printf("Before Replace:\n");
    Display(first);

    ReplaceNegative(&first);

    printf("After Replace:\n");
    Display(first);

    return 0;
}
