//Q4. Accept two numbers from user and display first number in second number of times.
#include<stdio.h>
void Display(int No, int Frequency)
{    
     int iCnt = 0;
     for(iCnt = 0; iCnt <= No; iCnt++)
     {
          printf("%d",No );
     }
}
int main()
{
     int iValue = 0;
     int iCount = 0;

     printf("Enter first number \n");
     scanf("%d", &iValue);

     printf("Enter second number \n");
     scanf("%d", &iCount);

     Display(iValue, iCount);
}