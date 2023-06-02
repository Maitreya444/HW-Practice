/* Write a program which accepts string from user reverse that string from user */
#include<stdio.h>
int StrRevX (char *str)
{
     int iCount = 0;
     while(*str != '\0')
     {
          str++;
     }
     str--;
}
int main()
{
     char arr[20];

     printf("Enter String \n");
     scanf("%[^'\n']s", arr);

     StrRevX(arr);

     printf("Character locataion is %d", arr);

     return 0;
}