#include<stdio.h>
int main()
{
 int Arr[]={11,21,51,101,111};

    int *p=NULL;
    int *q=NULL;

    p =&(Arr[1]);
    q=&(Arr[4]);
  
    printf("Result of substraction is : %d\n", q-p);

    q=q-2;

    printf("Data pointed by q is %d\n",*q);
    return 0;




}