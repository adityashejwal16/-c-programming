#include<stdio.h>


float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fsum = 0.0f;
    fsum = fNo1 + fNo2;          
    return fsum;
}

int main()
{
    float fValue1=0, fValue2= 0, fRet =0;

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter secound number:\n");
    scanf("%f",&fValue2);


    fRet=AdditionTwoNumbers(fValue1,fValue2);


    printf("Addition is: %f\n",fRet);

    return 0;
}