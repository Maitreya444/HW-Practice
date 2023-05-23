//Input : iRow = 3 iCol = 4
/*Output :1    2    3    4
          1    2    3    4    
          1    2    3    4
          1    2    3    4
*/ 
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
     int i = 0;
     int j = 0;

     for(i= 1; i<=iRow; i++)
     {
          for(j = 1; j<=iCol; j++)
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