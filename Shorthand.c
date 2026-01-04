#include <stdio.h>
int main()
{
int i = 10;
int j = 10;

int iAns=0, jAns=0;
iAns=i++;
jAns=++j;

printf("value of i: %d\n",i);
printf("value of iAns: %d\n",iAns);

printf("value of j: %d\n",j);
printf("value of jAns: %d\n",jAns);



    return 0;
}