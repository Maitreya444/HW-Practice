//Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
     int iCnt =0;
     int iEvenSum =Arr[0];
     int iOddSum = Arr[0];

     for(iCnt =0; iCnt < iLength ; iCnt ++)
     {
          if(Arr[iCnt] %2 ==0)
          {
               iEvenSum =  Arr[iCnt] + iEvenSum ;
          }
     }
     for(iCnt = 0; iCnt <= iLength; iCnt ++)
     {
          if(Arr[iCnt] %2 !=0)
          {
               iOddSum = Arr[iCnt] + iOddSum;
          }
     }
     int DifferenceANS = iEvenSum - iOddSum ;
     return DifferenceANS;
}
/*int DifferenceOdd(int Arr[], int iLength)
{
     int iCnt = 0;
     int iMinus = Arr[0];

     for(iCnt = 0; iCnt < iLength; iCnt ++)
     {
          if(Arr[iCnt] %2 !=0)
          {
               iMinus = Arr[iCnt] - iMinus;
          }
     }
     return iMinus;
}*/
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);    

    ptr =(int*)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
     printf("Unable to allocate memory \n");
     return -1;
    }

    printf("Enter number of elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
     scanf("%d", &ptr[iCnt]);
    }
    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
     printf("%d\n", ptr[iCnt]);
    }
    iRet = Difference(ptr, iSize);
    //iRet = DifferenceOdd(ptr, iSize);
    printf("Summation of elements is : %d",iRet);

    free(ptr);

    return 0;
}