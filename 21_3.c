/*Accept character from user. If it is capital then display all the characters from the input characters 
till Z. If input character is small then print all the characters in reverse order till a. 
In other cases return directly.*/
#include<stdio.h>
void Display(char ch)
{    
     int iCount = 0;
     if((ch >= 'A') && (ch <= 'Z'))
     {    
          for(iCount = ch; iCount <='Z'; iCount++)
          printf("%c",iCount);
     }
     else if ((ch >= 'a') && (ch <= 'z'))
     {
          for(iCount = ch; iCount >='a'; iCount --)
          printf("%c",iCount);
     }
}
int main()
{
     char cValue ='\0';

     printf("Enter a character \n");
     scanf("%c", &cValue);

     Display(cValue);
     return 0;
}