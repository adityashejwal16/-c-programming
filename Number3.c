#include<stdio.h>
#include<stdlib.h>

int Digit(int Arr[], int iLength)
{
    int i =0;
    int iNo = 0;

    for(i = 1; i < iLength; i++)
    {
        iNo=Arr[i];

        if(iNo < 0)
        {
            iNo= -iNo;
        }
        if((iNo / 100) >=1 && (iNo /1000)==0)
        {
            printf("%d",Arr[i]);
        }
    }
}
int main()
{
    int iSize=0, iRet=0, iCnt=0;
    int *p=NULL;
    
    printf("Enter number of element \n");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize* sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);  
    }

    iRet =Digit(p,iSize);

    free(p);
    return 0;
}
