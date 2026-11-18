#include<stdio.h>

// Find the maximum element

int main()
{
    int Arr[] = {12, 45, 23, 67, 34};
    int i = 0;
    int iMax = Arr[0];

    for(i = 1; i < 5; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }

    printf("%d\n", iMax);

    return 0;
}