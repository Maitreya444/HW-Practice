//Accept N numbers from user and display all such elements which are divisible by 5
#include<stdio.h>
#include<stdlib.h>
/*void Display(int Arr[], int iLength)
{
     int iCnt = 0;
     for(iCnt = 0; iCnt <= iLength ; iCnt ++)
     {
          if(Arr[iCnt] %5 ==0)
          {
               printf("%d\n", Arr[iCnt]);
          }
     }
}
int main()
{
     int iSize = 0;
     int iCnt = 0;
     int *ptr = NULL;

     printf("ENter number of elements");
     scanf("%d", &iSize);

     ptr =(int*) malloc(iSize * sizeof(int));

     if(ptr == NULL)
     {
     printf("Unable to allocate the memory");
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
    Display(ptr ,iSize);
    free(ptr);
    return 0;
}*/
#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management
// void Demo(int *Arr, int iLength)
void Demo(int Arr[], int iLength)
{
     int iCnt = 0;
     for(iCnt = 0; iCnt < iLength ; iCnt ++)
     {
          if(Arr[iCnt] %5 ==0)
          {
               printf("Elements divisible by 5 are %d\n ", Arr[iCnt]);
          }
     }
}

int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *ptr = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter

    // Step1 : Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);    
    // Step2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));
    // Step3 : Accept the values from user
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
    // Step 4: Pass the array to the function
    Demo(ptr,iSize);    // Demo(400,4);
    // Step 6: Deallocate the memory of array
    free(ptr);

    return 0;       // Return success to OS
}