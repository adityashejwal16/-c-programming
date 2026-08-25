#include <stdio.h>

void Display()
{
    int i = 0;
    int limit = 5;

    while(i < limit)
    {
        printf("%d ", i);
        i++;
    }
}

int main()
{
    Display();
    return 0;
}
