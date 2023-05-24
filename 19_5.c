/* Input : iRow = 4      iCol = 4
Output : 1    2    3    4
              2    3    4
                   3    4
                        4 */

#include<stdio.h>
void Pattern (int iRow, int iCol)
{
     int i = 0;
     int j = 0;
     for(i = iRow; i>= 1; i--)   // Outer
    {  //    1         2       3 
        for(j = iCol; j >= 1; j--)  // Inner
        { 
            if(i >= j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
}
}
int main()
{
     int iValue1 = 0;
     int iValue2 = 0;

     printf("Enter number of Rows and columns \n:");
     scanf("%d %d", &iValue1, &iValue2);

     Pattern(iValue1, iValue2);
}