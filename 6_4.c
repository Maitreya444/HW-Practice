//Write a program which accept number from user and display its table.
#include<stdio.h>
void Table(int iNo)
{
     int iCnt = 0;
     for(iCnt = 1; iCnt <= 10; iCnt ++)
     {
          printf("\n %d * %d = %d", iNo);

          //        printf ("\n %d * %d = %d", num, i, (num*i));  

     }
}
int main()
{
     int iValue = 0;
     printf("Enter number \n");
     scanf("%d", &iValue);

     return 0;
}
