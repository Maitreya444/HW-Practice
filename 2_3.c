//Q3. Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".
#include<stdio.h>
void Display(int iNo)
{
     if(iNo <=10)
     {
          printf("Hello");
     }
     else
     {
          printf("Demo");
     }
}
int main()
{
     int Number = 0;
     printf("Enter number \n");
     scanf("%d", &Number);

     Display(Number);
     return 0;
}