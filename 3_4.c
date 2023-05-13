//Write a program which accept number from user and return summation of all non factors.
#include<stdio.h>
int SumNotFact(int iNo)
{
     int iCnt = 0;
     int iAdd =0;
     for(iCnt =1; iCnt <= iNo; iCnt ++)
     {
          if((iNo % iCnt)!=0)
          {
               printf("%d\n", iCnt);
               iAdd = iAdd + iCnt;
          }
     }
     return iAdd;

}
int main()
{
     int iValue = 0;
     int iRet = 0;

     printf("Enter a number \n");
     scanf("%d",&iValue);

     iRet = SumNotFact(iValue);
     printf("Summation is :%d\n", iRet);

     return 0;
}