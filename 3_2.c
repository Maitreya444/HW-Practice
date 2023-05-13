//Write a program which accepts number from user and display its factors in decreasing order.
#include<stdio.h>
void Display(int Number)
{    
     if(Number <0)
     {
          Number =-Number;
     }
     int iCnt = 0;
     for(iCnt = Number/2; iCnt <= Number; iCnt--)
     {
          if((Number % iCnt)==0)
          {
               printf("%d\n",iCnt);
          }
     }
}
int main()
{
     int no = 0;

     printf("Enter a number \n");
     scanf("%d", &no);

     Display(no);

     return 0;
}