//Write a program which accepts string froum user and convert it into lowercase
#include<stdio.h>
void strlwrx(char *str)
{
     while(*str != '\0')
     {
          if((*str >= 'A') && (*str <= 'Z'))
          {
               *str = *str + 32;
          }
          str ++;
     }
}
int main()
{
     char arr[20];

     printf("Enter String \n");
     scanf("%[^'\n']s",arr);

     strlwrx(arr);

     printf("Modified string is %s",arr);

     return 0;
}