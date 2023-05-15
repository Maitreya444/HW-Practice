//Accept N numbers from user and return frequency of even numbers
#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management
// void Demo(int *Arr, int iLength)
int Count(int Arr[], int iLength)
{
     int iCnt =0;
     int iCount =0;

     for(iCnt =0; iCnt < iLength; iCnt ++)
     {
          if(Arr[iCnt] %2 ==0)
          {
               iCount++;
          }
     }
     return iCount;
}

int main()          
{
    int iSize = 0;  
    int *ptr = NULL;
    int iCnt = 0;   
    int iRet = 0;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);    
    
    ptr = (int *)malloc(iSize * sizeof(int));
    
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    iRet = Count(ptr,iSize);    // Demo(400,4);
    printf("Result is : %d\n", iRet);

    free(ptr);

    return 0;       
}