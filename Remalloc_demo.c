#include<stdio.h>
#include<stdlib.h>

int main()
{
   
   int *Arr = NULL;

  
   // step 1 allocate the memory
    Arr = (int *)malloc(5 * sizeof(int));

    Arr=(int*)reaclloc(Arr,10*sizeof(int));
    
    free(Arr);
   
    return 0;
}