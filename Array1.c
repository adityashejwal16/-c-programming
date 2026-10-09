#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40,};
    char ch[] = {'A', 'B', 'C', 'D', 'F'};
    double d[]= {10.52, 50.11, 22.52, 32.22};
    float f[] = {10.2f, 10.5f, 10.0f, 88.2f};

    printf("static memory allocation is : ");
    printf("%d\n",sizeof(Arr));
    printf("%zu\n",sizeof(ch));
    printf("%zu\n",sizeof(d));
    printf("%zu\n",sizeof(f));

    return 0;
}