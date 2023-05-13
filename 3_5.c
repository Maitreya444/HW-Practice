//Write a program which accept number from the user and return difference between summation of all its factors and non factors
#include<stdio.h>
int FactDiff(int iNo)
{
     int fCnt =0;
     int Add = 0;
     int nfCnt = 0;
     int Sub = 0;
     int Total =0;
     for(fCnt =2; fCnt <= iNo/2; fCnt ++)
     {
          if((iNo % fCnt) ==0)
          {
               printf("%d\n",fCnt);
               Add = Add + fCnt;
          }
     }
     return Add;

     for(nfCnt =1; nfCnt <= iNo; nfCnt ++)
     {
          if ((iNo % nfCnt) !=0)
          {
               printf("%d\n", nfCnt);
               Sub = Sub - nfCnt;
          }
     }
     return Sub;
{
     Total = Add - Sub;
     return Total;
}
}
int main()
{
     int iValue = 0;
     int iRet = 0;

     printf("Enter a number \n");
     scanf("%d",&iValue);

     iRet = FactDiff(iValue);
     printf("Summation is: %d\n",iRet);

     return 0;
}