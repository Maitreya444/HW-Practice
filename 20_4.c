//Accept charcter from user and check wheather it is small case or non (a-z)
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSmall(char ch)
{
     if((ch >= 'a') && (ch <= 'z'))
     {
          return TRUE;
     }
     else
     {
          return FALSE;
     }
}
int main()
{
     char cValue = '\0';
     BOOL bRet = FALSE;

     printf("Enter the charcter: \n");
     scanf("%c", &cValue);

     bRet = ChkSmall(cValue);

     if(bRet == TRUE)
     {
          printf("It is Small case Character");
     }
     else
     {
          printf("It is not Small case Character");
     }
     return 0;
}