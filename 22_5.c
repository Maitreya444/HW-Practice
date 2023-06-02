/*Write a program which accept string from user and display it in reverse order.*/
#include<stdio.h>
int Reverse (char *str)
{
     int iCount = 0;
     for(iCount = *str-1; iCount >= 0; iCount --)
     {
          if((*str >= 'A') && (*str <= 'z'))
          {
               printf("%c", *str );
          }
          str ++;
     }
     return iCount;
}
int main()
{
     char arr[20];
     int iRet =0;

     printf("Enter String \n");
     scanf("%[^'\n']s",arr);

     iRet = Reverse(arr);

     printf("%d", iRet);

     return 0;
}