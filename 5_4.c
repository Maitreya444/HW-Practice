//Write a program which accepts N from user and print all odd numbers up to N.
#include<stdio.h>
void OddDisplay(int iNo)
{    
          int iCnt = 0;

     if(iNo/2 !=0)
     {
          printf("%d",iCnt);
     }
     for(iCnt = 0; iCnt <=iNo; iCnt++)
     {

     }
}
int main()
{
     int iValue = 0;
     printf("Enter no");
     scanf("%d", &iValue);

     OddDisplay(iValue);

     return 0;
}