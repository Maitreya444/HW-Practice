//Write a program which accpet one number from user and toggle 7th and 10th bit of that number. Return modified number.
#include<stdio.h>
typedef unsigned int UINT;
int ToggleBit (UINT iNo)
{
     UINT iMask = 0X00000240;
     UINT iResult = 0;

     iResult = iNo ^ iMask;
     return iResult;
}
int main()
{
     UINT iValue = 0;
     UINT iRet = 0;

     printf("Enter a number \n");
     scanf("%d", &iValue);

     iRet = ToggleBit(iValue);

     printf("Value is %d\n",iRet);

     return 0;
}