#include<stdio.h>

int EvenFactorial(int iNo)
{
     int iCnt = 0;
     int iFact = 1;

    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if (iCnt % 2 ==0 ) 
        {
            iFact=iFact*iCnt;
        }
    }
     return iFact;
}
int main()
{
    int iValue =0, iRet= 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of numnber is %d",iRet);
    return 0;
}
/* input : 5
output : 8


*/