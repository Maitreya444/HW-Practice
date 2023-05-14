//Write a program which accept number from user and check wheather it contains 0 in it or not.
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
     int iDigit =0;

     while(iNo !=0)
     {    
          iDigit = iNo %10;
          if (iDigit ==0)
          {
               break;
          }
          iNo = iNo /10;
     }
     if(iNo ==0)
     {
          return FALSE;
     }
     else
     {
          return TRUE;
     }
}
int main()
{
     int iValue = 0;
     BOOL bRet = FALSE;

     printf("Enter number \n");
     scanf("%d", &iValue);

     bRet = ChkZero(iValue);

     if(bRet == TRUE)
     {
          printf("It contains zero");
     }
     else
     {
          printf("It does not contain zero");
     }
     return 0;
}