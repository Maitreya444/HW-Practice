//Input : iRow = 3 iCol = 5
/*Output :5    4    3    2    1    
          5    4    3    2    1 
          5    4    3    2    1
*/ 
#include<stdio.h>
void Pattern (int iRow, int iCol)
{
     int i = 0;
     int j = 0;
     for(i = iRow; i >=1; i--)
     {
          for(j = iCol ; j>=1; j--)
          {
               printf("%d\t", j);
          }
          printf("\n");
     }
}
int main()
{
     int iValue1 = 0;
     int iValue2 = 0;

     printf("ENter iRow and iCol :\n");
     scanf("%d %d", &iValue1, &iValue2);

     Pattern(iValue1, iValue2);

     return 0;
}