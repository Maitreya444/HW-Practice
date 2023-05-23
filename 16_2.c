//Input : iRow = 4 iCol = 4
/*Output :A    B    C    D
          a    b    c    d
          A    B    C    D
          a    b    c    d
*/ 
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
     int i = 0;
     int j = 0;
     char ch = '\0';
     char chh = '\0';


     for(i =1, chh='A'; i<=iRow; i++, chh++)
     {
          for(j = 1, ch = 'a'; j<=iRow; j++,ch++ )
          {
               if(i %2 ==0)
               {
                    printf("%c\t",ch);
               }
               else
               {
                    printf("%c\t", chh);
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