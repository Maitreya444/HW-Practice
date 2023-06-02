//Accept nos of rows and number of columns from user and display below pattern. 
/* Input: iRow = 6  iCol = 6
   
   Output:  * * * * * *                  
            *       * * 
            *     *   * 
            *   *     *
            * *       *
            * * * * * *    */
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
     int i = 0;
     int j = 0;

     for(i = 1; i<=iRow; i++)
     {
          for(j = 1; j <=iCol; j++)
          {
               if(j == 1 || i ==1 || i == iRow || j ==iCol || j==iCol -i +1)
               {
                    printf("*\t");
               }
               else
               {
                    printf("\t");
               }
          }
     printf("\n");

     }
}
int main()
{
     int iValue1 = 0;
     int iValue2 = 0;

     printf("Enter number of rows and columns");
     scanf("%d %d", &iValue1 , &iValue2);

     Pattern(iValue1, iValue2);
     return 0;
}