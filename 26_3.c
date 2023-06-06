//Write a program which checks wheather 7th, 15th, 21st and 28th bit is ON or OFF
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
     UINT iMask = 0X08104040;
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
          printf("7th, 15th, 21st and 28th is ONN \n");
     }
     else
     {
          printf("7th, 15th, 21st and 28th is OFF \n");
     }
     return 0;
}
