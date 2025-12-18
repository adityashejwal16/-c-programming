#include<stdio.h>

void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=5; iCnt++)
    {
        printf("\t*\t$\t", iCnt);
    }
    printf("%d \n");
}
int main()
{  
    int iValue=0;
    printf("Enter number\n");

    scanf("%d", &iValue);

    pattern(iValue);
    return 0;
}