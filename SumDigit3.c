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

void SumDigits(PNODE Head)
{
    int Sum = 0, iNo = 0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        iNo = temp -> data;
        Sum = 0;

        while(iNo != 0)
        {
            Sum = Sum + (iNo % 10);
            iNo = iNo / 10;
        }
        printf("Number : %d  Digit : %d\n", temp->data, Sum);

        temp = temp->next;
    }
   
}

int main()
{
    PNODE  first = NULL;

    InsertFirst(&first, 24);
    InsertFirst(&first, 21);
    InsertFirst(&first, 62);
    InsertFirst(&first, 112);
    InsertFirst(&first, 21);

    printf("Digits Sum are : \n");
    SumDigits(first);

    return 0;
}