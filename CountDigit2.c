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

void CountDigits(PNODE Head)
{
    int iCount = 0, digit = 0, iNo = 0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        iNo = temp -> data;
        digit = 0;

        while(iNo != 0)
        {
            digit++;
            iNo = iNo / 10;
        }
        printf("Number : %d  Digit : %d\n", temp->data, digit);

        iCount++;
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

    printf("Digits are : \n");
    CountDigits(first);

    return 0;
}