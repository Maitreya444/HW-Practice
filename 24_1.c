/*Write a program which accept string from user and accept one character. Check wheather that character is 
present in the string or not*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkChar(char *str, char ch)
{
     while(*str != '\0')
     {
          if((*str == ch))
          {
               return TRUE;
          }
          else
          {
               return FALSE;
          }
          str ++;
     }
}
int main()
{
     char arr[20];
     char cValue;
     BOOL bRet = FALSE;

     printf("Enter String \n");
     scanf("%[^'\n']s", arr);

     printf("Enter the character \n");
     scanf("%c", &cValue);

     bRet = ChkChar(arr, cValue);

     if(bRet == TRUE)
     {
          printf("Character found");
     }
     else
     {
          printf("Charcater not found");
     }
     return 0;
}