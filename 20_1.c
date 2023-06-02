//Accept Character from user and check wheather it is alphabet or not (A-Z) & (a-z)
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char ch)
{
     if((ch > 64) && (ch <=122))
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

     printf("Enter the character :\n");
     scanf("%c", &cValue);

     bRet = ChkAlpha(cValue);

     if(bRet == TRUE)
     {
          printf("It is a character");
     }
     else
     {
          printf("It is not a character");
     }
     return 0;
}