#include<stdio.h>

int main()
{
    int Arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    printf("%d\n", size);


    return 0;
}