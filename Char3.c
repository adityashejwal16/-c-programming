#include<stdio.h>

int main()
{
    char ch ='\0';

    printf("Enter The Character : \n");
    scanf("%c",&ch);

    // Small Character
    if(ch >= 'a' && ch <= 'z')   
    {
        printf("its a character\n");
    }
    else
    {
        printf("its not a  character\n");
    }
     
   

    return 0;
}