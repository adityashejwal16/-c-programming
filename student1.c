#include<stdio.h>
 
  int main()
  {
   { 
    char Div='\0'
    int age = '0'
    float emp salary=0.0;
   }

    printf("Enter your Divison..\n");
    Scanf("%c", & Div);

    printf("Enter your age..\n");
    Scanf("%d", & age);

    printf("Enter employ salary..\n");
    Scanf("%f", & salary);

    printf("Your Divison is :%c \n", Div);
    printf("Enter your age is : %d \n", age);
    printf("Enter your emp salary is : %f \n", salary);

    return 0;
  };