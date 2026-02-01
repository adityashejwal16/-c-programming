#include<stdio.h>

void Pattern(int iNo)
{
   int i =0;
   char ch = 'A';

   for(i = 1; i <= iNo; i++,ch++)
   {
      printf("%c\t",ch);
   }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number of Eelements\n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}