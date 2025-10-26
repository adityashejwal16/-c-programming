#include<stdio.h>
#include<stdlib.h>

int main()
{
   int lenght = 0;
   int *Arr = NULL;

   printf("Enter the number of element :\n");
   scanf("%d",&lenght);
   
   // step 1 allocate the memory
    Arr = (int *)malloc(lenght * sizeof(int));
    if (Arr == NULL)
    {
        printf("unable to allocate memory\n");
    
    }
    else
    {
        printf("memroy grts succesfullyallocates\n");

    }

    // step 2 use the memory
    // step 3 free the memory

    free(Arr);

    return 0;
}