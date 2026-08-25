#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5)==0)
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
    int iValue=0;
    bool bRet=false;

    printf("Enter Number :\n");
    scanf("%d\n",&bRet);

    bRet=Check(iValue);
    if(bRet==true)
    {
        printf("Divisible by 50");
    }
    else
    {
        printf("Not Divisible by 5");

    }

    return 0;
}
