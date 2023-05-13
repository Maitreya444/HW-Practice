//Write a program which accept N and print first 5 multiples of N.
#include<stdio.h>
void MultipleDisplay(int No)
{
     int iCnt = 0;
     for(iCnt = 0; iCnt <=No*5; iCnt++)
     {
          printf("%d", iCnt);
     }
}
int main()
{
     int iValue = 0;
     printf("Enter name");
     scanf("%d", &iValue);

     MultipleDisplay(iValue);

     return 0;
}