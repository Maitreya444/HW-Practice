/*Write a program which accept string from user and check whether it contains vowels in it or not*/
#include<stdio.h>
int Vowels(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E')|| (*str == 'I')|| (*str == 'O')|| (*str == 'U')|| (*str == 'a')|| (*str == 'e')|| (*str == 'i')|| (*str == 'o')|| (*str == 'u'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
     char arr[20];
     int iRet =0;

     printf("Enter String \n");
     scanf("%[^'\n']s",arr);

     iRet = Vowels (arr);

     printf("%d", iRet);

     return 0;
}