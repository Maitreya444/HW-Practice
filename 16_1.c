//Input : iRow = 4 iCol = 4
/*Output :A    B    C    D
          A    B    C    D
          A    B    C    D
          A    B    C    D
*/ 
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
     char ch = '\0';
     int i = 0;
     int j = 0;

     for(i = 1; i<=iRow; i++)
     {
          for(j = 1, ch = 'A'; j<=iCol ; j++, ch++)
          {
            printf("%c\t", ch);
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