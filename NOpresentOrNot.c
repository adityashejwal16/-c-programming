#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int count = 0;
    int NO = 0; 

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

     printf("Enter number Number: ");
     scanf("%d", &iValue);


    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }
     bRet = Check(p, iSize,iValue);

     if(bRet == TRUE)
     {
        printf("Number is present");
     }
     else
     {
        printf("Number is Not present");
     }


    free(p);
    return 0;
}
