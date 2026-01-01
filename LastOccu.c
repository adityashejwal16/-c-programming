#include <stdio.h>
#include <stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount=iCnt;
        }
    }
    return iCount;
    
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    

    printf("Enter number of elements:");
    scanf("%d", &iSize);

     printf("Enter number Number: ");
     scanf("%d", &iValue);


    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n" ,iCnt+1);
        scanf("%d", &p[iCnt]);
    }
     iRet = LastOcc(p, iSize,iValue);
     if(iRet == -1)
     {
        printf("There is no such number\n");
     }
     else
     {
        printf("Last occurrence of number is : %d\n" ,iRet);
     }


    free(p);
    return 0;
}
/* input : N :  6
           NO : 66
      element : 85 66 3 66 93 88
      Output : 3
*/