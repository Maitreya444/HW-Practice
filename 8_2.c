//Write a program which accept number from user and return count of Odd.
#include<stdio.h>
int ChkOdd(int iNo)
{
     int iCount = 0;
     int iDigit = 0;

     while(iNo !=0)
     {
          iDigit = iNo %10;
          if(iDigit %2 !=0)
          {
               iCount ++;
          }
          iNo = iNo /10;
     }
     return iCount;
}
int main()
{
     int iValue = 0;
     int iRet = 0;

     printf("Enter a number \n");
     scanf("%d", &iValue);

     iRet = ChkOdd(iValue);

     printf("%d", iRet);
     return 0;
}