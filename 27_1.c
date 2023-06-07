//Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number 
#include<stdio.h>
typedef unsigned int UINT;
int OFFBIT(UINT iNo)
{
     UINT iMask = 0X00000040;
     UINT iResult = 0;

     iResult = iNo & iMask ;
     if(iResult == iMask)
     {
          return (iNo ^ iMask);
     }
     else
     {
          return iNo;
     }
}
int main()
{
     UINT iValue = 0;
     UINT iRet = 0;

     printf("Enter a number \n");
     scanf("%d", &iValue);

     iRet = OFFBIT(iValue);

     
     {
          printf("The number is %d\n", iRet);
     }
     return 0;
}