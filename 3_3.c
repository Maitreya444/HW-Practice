//Write a program which accept a number from user and display all its non factors.
#include<stdio.h>
void Display(int Number)
{
     int iCnt = 0;
     for(iCnt = 1; iCnt <= Number; iCnt ++)
     {
          if((Number % iCnt ) !=0)
          {
               printf("%d\n",iCnt);
          }
     }
}
int main()
{
     int No = 0;

     printf("Enter a number \n");
     scanf("%d",&No);

     Display(No);
}