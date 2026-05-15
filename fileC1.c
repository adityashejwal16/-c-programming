#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Aadix.txt",0777);

    if(fd == -1)
    {
        printf("File Not Created \n");
    }
    else
    {
        printf("File gets Created \n");
    }

    return 0;
}