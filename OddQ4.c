#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0) 
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}
int main()
{
    int iValue =0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
// input : 18
// output : 1 3 5 7 9 11 13