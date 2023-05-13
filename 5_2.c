//2.Write a program which accept number from user and print numbers till that number
#include<stdio.h>
void Display(int No1)
{
     int iCnt = 0;
     for(iCnt = 0; iCnt <=No1; iCnt++)
     {
          printf("%d",iCnt);
     }
}
int main()
{
     int iValue = 0;
     printf("Enter number \n");
     scanf("%d", &iValue);

     Display(iValue);
     return 0;
}