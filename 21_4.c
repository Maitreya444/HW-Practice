/*Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
int Display(char ch)
{    
     if((ch >= 33) && (ch <= 52))
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
     char cValue ='\0';
     int bRet = FALSE;
     printf("Enter a character \n");
     scanf("%c", &cValue);

     bRet = Display(cValue);

     if (bRet == TRUE)
     {
          printf("It is speical character");
     }
     else
     {
          printf("It is not a speical character");
     }
     return 0;
}