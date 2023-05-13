//1.Write a program which accept number from user and print that number of $ & * on screen
#include<stdio.h>
void Pattern(int No1)
{
     int iCnt = 0;
     for(iCnt = 0; iCnt <=No1; iCnt++)
     {
          printf("$&*",iCnt );
     }
}
int main()
{
     int iValue = 0;
     printf("Enter no \n");
     scanf("%d",&iValue);

     Pattern(iValue);

     return 0;
}