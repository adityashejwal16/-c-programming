#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        printf("Your Exam At 7 AM : \n");
        break;

        case 'B':
        printf("Your Exam At 8:30 AM : \n");
        break;

        case 'C':
        printf("Your Exam At 9:20 AM : \n");
        break;

        case 'D':
        printf("Your Exam At 10:30 AM : \n");
        break;
    }
}
int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Your Divison\n");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}