/*Input : iRow = 5  iCol = 5
Output : a     b    c    d    e
         1     2    3    4    5        
         a     b    c    d    e
         1     2    3    4    5
         a     b    c    d    e */

#include<stdio.h>
void Pattern (int iRow, int iCol)
{
     int i =0;
     int j = 0;
     char ch = '\0';

     for(i = 1; i<= iRow; i++)
     {    
          for(j = 1, ch = 'a'; j<= iCol; j++, ch++)
          {
          if(i %2 !=0)
          {
               printf("%c\t", i);
          }
          else
          {
               printf("%d\t", j);
          }
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