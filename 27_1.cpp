//Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number 
#include<iostream>
using namespace std;
typedef unsigned int UINT;

int OFFBIT (UINT iNo)
{    
     UINT iMask = 0X00000040;
     UINT iResult = 0;

     iResult = iNo & iMask;

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

     cout<<"Enter a number \n";
     cin>>iValue;

     iRet = OFFBIT (iValue);

     cout<<"Number after turning off 7th bit is "<<iRet<<"\n";

     return 0;
}