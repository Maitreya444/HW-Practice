/*Write a program which displays ASCII table. Table contains Symbol, decimals, Hexadecimal, and Octal 
represnetation of every number from 0 to 235*/
#include<stdio.h>
void DisplayASCII(char ch)
{
     int iCnt = 0;
     for(iCnt = 0, ch = '0'; iCnt <= 255; iCnt++, ch++)
     {    
          printf("%c \n", iCnt);
     }
}
int main()
{
     char cValue = '\0';

     DisplayASCII(cValue);
     return 0;
}