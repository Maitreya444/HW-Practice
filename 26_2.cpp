//Write a program which checks wheather 5th and 18th bit is ON or OFF
#include<iostream>
using namespace std;
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
     bool bRet = 0;

     cout<<"Enter a number to check wheater 5th and 18th bit is ONN or OFF"<<"\n";
     cin>>iValue;

     bRet = CheckBit(iValue);

     if(bRet == true)
     {
          cout<<"5th and 18th Bit is ONN";
     }
     else
     {
          cout<<"5th and 18th Bit is OFF";
     }
     return 0;
}