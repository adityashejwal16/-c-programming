#include<stdio.h>

 char DisplayConvert(int cValue)
{
    if(cValue >='A' && cValue <= 'Z')

    {
       return cValue + 32;
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
       return cValue = 32;
    }
    else
    {
        return cValue;
    }
}
int main()
{
    char cValue='\0';
    char cConverted = '\0';
    

    printf("Enter character : \n");
    scanf("%c",&cValue);

    cConverted = DisplayConvert(cValue);
    printf("Converted character: %c\n", cConverted);
    return 0;
}