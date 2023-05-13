//Write a program which accepts 3 numbers and return its multiplication
#include<stdio.h>
int Multiply(int no1, int no2, int no3)
{
     int iMul =0;
     return no1*no2*no3;
}
int main()
{
     int value1 = 0;
     int value2 = 0;
     int value3 = 0;
     int iRet = 0;

     printf("Please enter 3 numbers \n:");
     scanf("%d %d %d",&value1, &value2, &value3 );

     iRet = Multiply(value1 , value2, value3);
     printf("Multiplication is  %d\n", iRet);
     return 0;
}