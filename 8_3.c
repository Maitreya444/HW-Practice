//Write a program which accept number from user and retrun the count of digits between 3 and 7
#include<stdio.h>
int ChkCount(int iNo)
{
     int iDigit = 0;
     int iCount = 0;

     while(iNo !=0)
     {
          iDigit = iNo %10;
          if(iDigit >=3 && iDigit <=7)
          {
               iCount++;
          }
          iNo = iNo /10;
     }
     return iCount;
}
int main()
{
     int ivalue = 0;
     int iRet = 0;

     printf("ENter number \n");
     scanf("%d", &ivalue);

     iRet = ChkCount(ivalue);

     printf("%d", iRet);
}