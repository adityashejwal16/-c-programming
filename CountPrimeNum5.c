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

int CountPrime(PNODE Head)
{
    PNODE temp = Head;
    int i = 0, iFlag = 1, iNo = 0, iCount = 0;

    while(temp != NULL)
    {
        iNo = temp->data;
        iFlag = 1;

        if(iNo <= 1)
        {
            iFlag = 0;
        }
        else
        {
            for(i = 2; i * i <= iNo; i++)
            {
                if(iNo % i == 0)
                {
                    
                    iFlag = 0;
                    break;
                }
                
            }
        }

        if(iFlag == 1)
        {
            iCount ++;
        }

        temp = temp->next;
    }
    return iCount;
}


int main()
{
    PNODE  first = NULL;
    int iRet = 0;

    InsertFirst(&first, 5);
    InsertFirst(&first, 21);
    InsertFirst(&first, 7);
    InsertFirst(&first, 3);
    InsertFirst(&first, 21);

    
    iRet = CountPrime(first);
    printf("Total Prime numbers are : %d\n",iRet);

    return 0;
}