//Write a program which accepts one number from the user and check wheather the number is greater than 100 or not?
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL ChkGreater(int No1)
{   
     if(No1 > 100)
     {
          return TRUE;
     }
     else
     {
          return FALSE;
     }
}
int main()
{
     BOOL iValue =0;
     BOOL bRet = FALSE;
     printf("Please enter number \n");
     scanf("%d", &iValue);
     bRet = ChkGreater(iValue);
     
     if(iValue > 100)
     {
          printf("Greater");
     }
     else
     {
          printf("Smaller");
     }
     return 0;
}