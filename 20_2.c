//Accept Character from user and check wheather it is capital or not (A-Z)
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkCaptial (char ch)
{
     if((ch >= 65) && (ch <= 90))
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

     printf("Enter the character: \n");
     scanf("%c", &cValue);

     bRet = ChkCaptial(cValue);

     if(bRet == TRUE)
     {
          printf("It is a Capital Letter");
     }
     else
     {
          printf("It is not a Captial Letter");
     }
     return 0;
}