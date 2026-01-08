#include <stdio.h>
int main()
{
 
    int ivalue=11;
    char cValue='M';

    int *iPtr =&iValue;
    char *cPtr=&cValue;

    printf("Size of iptr : %lu\n",sizeof(iptr));
    printf("Size of cptr : %lu\n",sizeof(cptr));

    return 0;
}