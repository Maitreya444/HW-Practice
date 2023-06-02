/*Write a program which accpet string from the user and accept one character from the user and return frequency 
of that charcater*/
#include<stdio.h>
int CountChar (char *str, char ch)
{
     int iCount = 0;
     while(*str !='\0')
     {
          if((*str == ch))
          {
               iCount ++;
          }
          str ++;
     } 
     return iCount;
}
int main()
{
     char arr[20];
     char cValue = '\0';
     int iRet = 0;

     printf("Enter String \n");
     scanf("%[^'\n']s", arr);

     printf("Enter Charcter \n");
     scanf("%c", &cValue);

     iRet = CountChar(arr, cValue);

     printf("Charcter frequency is %d", iRet);

     return 0;
}