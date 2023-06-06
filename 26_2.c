//Write a program which checks wheather 5th and 18th bit is ON or OFF
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
     UINT iMask = 0X00020010;
     UINT iResult = 0;

     iResult = iNo & iMask;
     if(iResult == iMask)
     {
          return true;
     }
     else
     {
          return false;
     }
}
int main()
{
     UINT iValue = 0;
     bool bRet = false;

     printf("Enter a number \n");
     scanf("%d", &iValue);

     bRet = CheckBit(iValue);

     if(bRet == true)
     {
          printf("5th bit and 18th is ONN \n");
     }
     else
     {
          printf("5th bit and 18th is OFF \n");
     }
     return 0;
}