//Write a program which accpet one number from user and ONN its first 4 bits. Return modified value.
#include<iostream>
using namespace std;
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

     cout<<"Enter a number \n";
     cin>>iValue;

     iRet = ONNBIT(iValue);

     cout<<"Modified number is"<<"\n";

     return 0;
}