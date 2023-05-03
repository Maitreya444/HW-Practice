//2. Accept one number from user and print that number of * on screen.
#include <stdio.h>
void Display(int iNo)
{    
     int iCnt =0;
     while(iNo > iCnt )
     {
          printf("*\n");
          iNo--;
     }
}
int main ()
{
     int Value = 0;

     printf("Enter a number \n");
     scanf("%d",&Value);

     Display(Value);
     return 0;
}