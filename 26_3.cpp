//Write a program which checks wheather 7th, 15th, 21st and 28th bit is ON or OFF
#include<iostream>
using namespace std;
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
     bool bRet = 0;

     cout<<"Enter a number"<<"\n";
     cin>>iValue;

     bRet = CheckBit(iValue);

     if(bRet == true)
     {
          cout<<"7th, 15th, 21st and 28th is ONN ";
     }
     else
     {
          cout<<"7th, 15th, 21st and 28th is OFF ";
     }
     return 0;
}