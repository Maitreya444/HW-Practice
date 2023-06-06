//1 and 32 on or off
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
     UINT iMask = 0X80000001;
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
          printf("1st and 32nd bit is ONN \n");
     }
     else
     {
          printf("1st and 32nd bit is OFF \n");
     }
     return 0;
}
