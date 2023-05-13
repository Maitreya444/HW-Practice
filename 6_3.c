//Write a program to find factorial of given number.
#include<stdio.h>
int Factorial (int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)       // O(N/2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
     int iValue = 0;
     int iRet = 0;

     printf("Enter number \n");
     scanf("%d", &iValue);

     iRet = Factorial(iValue);

     printf("Factorial of number is %d\n: ", iRet);

     return 0;
}