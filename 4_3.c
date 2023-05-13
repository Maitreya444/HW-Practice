//Write a program which accepts two numbers and check wheather numbers are equal or not.
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkEqual(int value1 , int value2)
{    
     int CHECK = 0;
     if((value1 == value2))
     {
          return TRUE;
     }
     else
     {
          return FALSE;
     }
     return CHECK;
}
int main()
{
     int No1 = 0;
     int No2 = 0;

     BOOL bRet = FALSE;
     printf("Please Enter two numbers\n");
     scanf("%d %d",&No1, &No2);

     bRet = ChkEqual(No1 , No2);

     if (No1 == No2)
     {
          printf("EQUAL");
     }
     else
     {
          printf("NOT EQUAL");
     }
     return 0;
}