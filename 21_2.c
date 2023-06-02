/*Accept character from user. If character is small display its corresponding capital character, 
and if it small then display its corresponding capital. In other cases display as it is.*/

#include<stdio.h>
void Display(char ch)
{    
     char upr = '\0';
     char lwr= '\0';
     if((ch >= 'A') && (ch <= 'Z'))
     {    
          lwr = ch + 32;
          printf("%c",lwr);
     }
     else if ((ch >= 'a') && (ch <= 'z'))
     {
          upr = ch - 32;
          printf("%c",upr);
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