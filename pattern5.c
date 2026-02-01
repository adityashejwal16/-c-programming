#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
      printf("%d ", i * 2);   
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number of Elements:\n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}

