#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem=0;
    iRem = iNo% 2;
    if(iRem ==0)
    {
        printf("It is Even Number..\n");
    }
    else
    {
       printf("It is Odd Number..\n");   
    }
}
int main()
{
    int iValue =0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);
    
    return 0;
}