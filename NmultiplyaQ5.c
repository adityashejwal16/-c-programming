#include<stdio.h>

void MultipleDisplay(int iNo)
{
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\t", iNo * i);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enetr number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;
}