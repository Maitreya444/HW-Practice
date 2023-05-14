//Write a program which accept number from user and return difference betwee nsummation of even digits adn summation of odd digits.
#include<stdio.h>
int CountDiff (int iNo)
{
     int iCount = 0;
     int iDigit = 0;
     int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2==0)
        {
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        printf("EVEN");
        }
        else
        {
          iSum = iSum + iDigit;
          iNo = iNo /10;
          printf("ODD");
        }
    }
    return iSum;
}

int main()
{
     int iValue = 0;
     int iRet = 0;

     printf("Enter number \n");
     scanf("%d", &iValue);

     iRet= CountDiff(iValue);

     printf("%d", iRet);

     return 0;
}