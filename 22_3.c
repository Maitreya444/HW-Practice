/*Write a program which accept string from user and return difference between frequency of small 
characters and frequency of capital characters.*/
#include<stdio.h>
int Difference (char *str)
{
     int upperfreq = 0;
     int lowerfreq = 0;
     while(*str != '\0')
     {    
          if ((*str >= 'A') && (*str <='Z'))
          {
               upperfreq ++;
          }
          else if ((*str >='a')&&(*str <='z'))
          {
               lowerfreq++;
          }
          str++;
     }
     return upperfreq - lowerfreq;
}
int main()
{
     char arr[20];
     int iRet =0;

     printf("Enter String \n");
     scanf("%[^'\n']s",arr);

     iRet = Difference (arr);

     printf("%d", iRet);

     return 0;
}