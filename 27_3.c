//Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
#include<stdio.h>
typedef unsigned int UINT;

int OFFBIT (UINT iNo)
{
     UINT iMask = 0X00000040;
     UINT iResult = 0;

     iResult = iNo ^ iMask;

     return iResult;
}
int main()
{
     UINT iValue = 0;
     UINT iRet = 0;

     printf("Emter a number \n");
     scanf("%d", &iValue);

     iRet = OFFBIT(iValue);

     printf("Number after toggle is %d\n", iRet);

     return 0;
}