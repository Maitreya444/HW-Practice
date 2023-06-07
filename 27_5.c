//Write a program which accpet one number from user and ONN its first 4 bits. Return modified value.
#include<stdio.h>
typedef unsigned int UINT;
int ONNBIT(UINT iNo)
{
     UINT iMask = 0X0000000F;
     
     return (iNo | iMask);
}
int main()
{
     UINT iValue = 0;
     UINT iRet = 0;

     printf("Enter a number \n");
     scanf("%d", &iValue);

     iRet = ONNBIT(iValue);

     printf("Modified number is %d\n", iRet);

     return 0;
}