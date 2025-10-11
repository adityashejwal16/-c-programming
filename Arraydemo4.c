#include <stdio.h>
int main()
{

  int Arr[4]={10,20,30,40};

  printf("Size of Arr :lu\n", sizeof(Arr)); // 20
  printf("Arr : %lu\n",Arr);
  printf("&Arr : %lu\n",&Arr);

  printf("Arr +1 : %lu\n",Arr +1);
  printf("(&Arr) +1 : %lu\n",(&Arr)+1);



    return 0;
}