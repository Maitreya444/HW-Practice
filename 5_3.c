//Write a program which accept number from user and print its numbers line.
#include<stdio.h>
void Display(int no)
{
     int iCnt = 0;
     for(iCnt = -no ; iCnt<=no; iCnt ++)
     {
          printf("%d",iCnt);
     }
}
int main()
{
     int No1 = 0;
     printf("Enter number");
     scanf("%d", &No1);

     Display(No1);
}