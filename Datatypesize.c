#include <stdio.h>
int main()
{

char cValue ='s';
int iValue =11;
float fValue=90.78f;
double dValue=98.564323;

printf("Size if character is :%lu\n", sizeof(cValue));
printf("Size if integer is :%lu\n", sizeof(iValue));
printf("Size if float is :%lu\n", sizeof(fValue));
printf("Size if double is :%lu\n", sizeof(dValue));

return 0;

}