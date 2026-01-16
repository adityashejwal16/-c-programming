#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int iSize=0, bRet=0, iCnt=0;
    int *p=NULL;

    printf("Enter number of element");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d element ",iSize);

    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    free(p);


    return 0;
}
// input : N : 6
           // Element : 85 44 11 55 80 60
// Output : 11 is present