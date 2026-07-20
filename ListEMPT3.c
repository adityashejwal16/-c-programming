#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


bool IsEmpty(PNODE Head)
{
   if(Head == NULL)
   {
      return true;
   }
   else
   {
     return false;
   }
}

int main()
{
    PNODE first = NULL;
    
    if(IsEmpty(first))
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List is not empty\n");
    }

    return 0;
}