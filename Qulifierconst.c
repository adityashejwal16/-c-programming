#include <stdio.h>
int main()
{

    int iNo1=10;
    const int iNo2=20;

    // below line generates error
    iNo1++;   //iNo1=iNo1 + 1;
    iNo2++;   //iNo2=iNo2 + 2;
    iNo2=30;

    return 0;
}