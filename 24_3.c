/*Write a program which accept string from user and accept one character. Return index of first occurances
of that character*/
#include<stdio.h>
int FirstChar (char *str, char ch)
{    
     int iCount = 1;
     int iPosition = 0;
     while(*str !='\0')
     {
          if((*str == ch))
          {
               iPosition = iCount;
               break;
          }
          iCount++;
          str++;
     }
     return iPosition;
}
int main()
{
     char arr[20];
     char cValue = '\0';
     int iRet = 0;

     printf("Enter String \n");
     scanf("%[^'\n']s",arr);

     printf("Enter character \n");
     scanf("%c", &cValue);

     iRet = FirstChar(arr, cValue);
     printf("Character location is %d", iRet);

     return 0;
}