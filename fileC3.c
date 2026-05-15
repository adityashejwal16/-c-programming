#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>   

int main()
{
   int fd = 0;
   char FileName[20];

   printf("Write The File Name That you want : \n");
   scanf("%s",FileName);

   fd = creat(FileName,0777);

   if(fd == -1)
   {
     printf("File Not Created\n");
   }
   else
   {
     printf("File gets Created\n");
   }
   
    return 0;
}