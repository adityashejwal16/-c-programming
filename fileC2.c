#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>   // IMP for unsing Linux terminal for unlink file 

int main()
{
    unlink("Aadix.txt");
    return 0;
}